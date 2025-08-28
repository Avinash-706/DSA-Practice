#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// UNOPTIMIZED APPROACH USING VECTOR (FIND PATH AND THE CALCULATE TIME VAI HEIGHT)
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


bool findPath(Node* root, int leaf, vector<Node*>& path) {
    if (root == NULL)       return  false;
    path.push_back(root);

    if (root->key == leaf)  return   true;

    if (findPath(root->left, leaf, path) || findPath(root->right, leaf, path))
        return  true;

    path.pop_back();
    return  false;
}

int height(Node* root) {
    if (root == NULL)   return 0;
    return  1 + max(height(root->left), height(root->right));
}


int burnTime(Node* root, int leaf) {
    vector<Node*> path;

    if (!findPath(root, leaf, path))    return  -1;

    int res = 0;
    for (int i = 0; i < (int)path.size(); i++) {
        Node* curr = path[i];

        // time taken to reach this ancestor from leaf
        int time = i;

        // check opposite subtree
        int subtreeHeight = 0;
        if (i > 0) {
            Node* prev = path[i-1];
            if (curr->left == prev)
                subtreeHeight = height(curr->right);
            else
                subtreeHeight = height(curr->left);
        }

        res = max(res, time + subtreeHeight);
    }

    return  res;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->right = new Node(5);
    root->left->left = new Node(30);
    root->left->left->right = new Node(50);
    root->left->left->left = new Node(40);
    root->left->left->left->left = new Node(60);
    root->left->left->left->left->left = new Node(70);

    int leaf = 50;
    cout << "Minimum burn time from leaf " << leaf << " : " << burnTime(root, leaf) << endl;

    return 0;
}

// TIME  COMPLEXITY  : O(n^2) worst case, O(n log n) average case
// SPACE COMPLEXITY  : O(n) worst case, O(log n) average case