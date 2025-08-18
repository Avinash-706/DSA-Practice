#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


//  DFS Approach : Pre-Order Traversal : using int SUM
bool checkSum(Node *root) {
    if(root == NULL)    return  true;                     
    if(root->left == NULL && root->right == NULL)   return  true;

    int sum = 0;
    if(root->left != NULL)  sum += root->left->key;   
    if(root->right != NULL) sum += root->right->key;

    return  (root->key == sum) && checkSum(root->left) && checkSum(root->right);
}

int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left  = new Node(3);
    root->left->right = new Node(5);

    cout << "Does the Binary Tree Support CHILDREN SUM PROPERTY : "
         << (checkSum(root) ? "Yes" : "No");

    return 0;
}

// TIME COMPLEXITY  : O(n), each node visited once
// SPACE COMPLEXITY : O(h), recursion stack where h = height of tree
//                   Worst case (skewed tree)   : O(n)
//                   Best case (balanced tree)  : O(log n)
