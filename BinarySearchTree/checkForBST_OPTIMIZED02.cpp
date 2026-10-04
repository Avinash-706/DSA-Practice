#include <iostream>
#include <climits>

using namespace std;

// OPTIMIZED APPROACH.
struct Node {

    int key;

    Node *left, *right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

int previous = INT_MIN;

bool isBST(Node *root) {

    if (root == NULL)
        return true;

    if (isBST(root->left) == false)
        return false;

    if (root->key <= previous)
        return false;

    previous = root->key;

    return isBST(root->right);
}

int main() {

    Node *root = new Node(80);

    root->left = new Node(70);
    root->right = new Node(90);

    root->left->left = new Node(60);
    root->left->right = new Node(75);

    root->right->left = new Node(85);
    root->right->right = new Node(100);

    if (isBST(root) == true)
        cout << "RESULT : Is a BST";
    else
        cout << "RESULT : NOT a BST";

    return 0;
}

// TIME COMPLEXITY  : O(n), where 'n' is the number of nodes in the BST
// SPACE COMPLEXITY : O(h), where 'h' is the height of BST