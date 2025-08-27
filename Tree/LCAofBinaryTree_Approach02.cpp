#include <iostream>
#include <vector>
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


Node* LCA(Node *root, int n1, int n2) {
    if(root == NULL)        return  NULL;
    if(root -> key == n1 || root -> key == n2)   return  root;
    
    Node *l = LCA(root -> left, n1, n2);
    Node *r = LCA(root -> right, n1, n2);

    if(l != NULL && r != NULL)  return  root;
    if(l != NULL)   return l;
    else            return r;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(50);
    root->right = new Node(60);
    root->left->left = new Node(70);
    root->left->right = new Node(20);
    root->left->left->left = new Node(40);
    root->left->right->left = new Node(90);
    root->left->right->right = new Node(80);
    root->left->right->left->left = new Node(30);

    Node* ans = LCA(root, 30, 80);
    if(ans != NULL) cout << "Lowest Common Ancestor of a Binary Tree : " << ans->key;
    else    cout << "Keys are not present in the tree";

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree, due to recursion call stack 
//                    (worst case O(n), balanced case O(log n))