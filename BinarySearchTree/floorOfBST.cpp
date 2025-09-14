#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key  = x;
        left = right = NULL;
    }
};


Node* temp = new Node(INT_MIN);
Node* floorInBST(Node* root, int x) {
    if (root == NULL)       return temp;

    if (root->key == x)     return root;
    else if (root->key < x){
        temp = root;
        return floorInBST(root->right, x);
    }

    else    return floorInBST(root->left, x);
}


void inorderTraversal(Node *root){
    if(root == NULL)    return;
    inorderTraversal(root -> left );
    cout << root -> key << " ";
    inorderTraversal(root -> right);
}


int main() {
    Node *root = new Node(10);
    root -> left = new Node(5);
    root -> right = new Node(15);
    root -> right -> left = new Node(12);
    root -> right -> right = new Node(30);    

    cout << "INORDER Traversal : ";
    inorderTraversal(root);

    Node *temp1 = floorInBST(root, 14);
    cout << endl << "Floor of the BST  : " << temp1 -> key << endl;

}

// TIME  COMPLEXITY  : O(h) per insertion | Balanced: O(log n), Worst (skewed): O(n)
// SPACE COMPLEXITY  : O(h), where h is the height of the BST (worst case O(n))