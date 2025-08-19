#include <iostream>
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


int isBalanced(Node *root) {
    if (root == NULL)   return 0;

    int lh = isBalanced(root->left);
    if (lh == -1)       return -1;

    int rh = isBalanced(root->right);
    if (rh == -1)       return -1;

    if (abs(lh - rh) > 1)   return -1;
    return max(lh, rh) + 1;
}

bool checkBalanced(Node *root) {
    return (isBalanced(root) != -1);
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);

    if(checkBalanced(root))     cout << "Tree is Balanced";
    else                        cout << "Tree is Not Balanced";

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the binary tree
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the binary tree (due to recursion stack)
//                   : Worst case (skewed tree)   : O(n)
//                   : Best case (balanced tree)  : O(log n)