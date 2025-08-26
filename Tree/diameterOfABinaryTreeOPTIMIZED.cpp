#include <iostream>
using namespace std;


// OPTIMIZED APPROACH
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


int ans = 0;        //Diameter Of The Tree
int dfs(Node *root) {
    if (root == NULL) return 0;

    int lh = dfs(root->left);
    int rh = dfs(root->right);

    ans = max(ans, 1 + lh + rh);

    return 1 + max(lh, rh);
}


int diameter(Node *root) {
    dfs(root);
    return ans;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->left  = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);

    cout << "Diameter of a Binary Tree : " << diameter(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(h), (h = height of tree, worst case : O(n))