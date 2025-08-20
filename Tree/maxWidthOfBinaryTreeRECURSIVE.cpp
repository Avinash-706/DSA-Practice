#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

// DFS traversal
void countNodes(Node* root, int level, unordered_map<int, int>& levelCount) {
    if (root == NULL) return;

    // Increase node count for this level
    levelCount[level]++;

    countNodes(root->left, level + 1, levelCount);
    countNodes(root->right, level + 1, levelCount);
}

int maxWidth(Node* root) {
    unordered_map<int, int> levelCount; 
    countNodes(root, 0, levelCount);

    int res = 0;
    for (auto &p : levelCount) {
        res = max(res, p.second);
    }
    return res;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);

    cout << "Maximum Width of The Binary Tree : " << maxWidth(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the tree  
// SPACE COMPLEXITY  : O(h) for recursion stack, where 'h' is the height of the tree  
//                   : O(h) for hashmap storage (one entry per level)  
//                   : Worst case (skewed tree)  -> O(n)  
//                   : Best case (balanced tree) -> O(log n)  
