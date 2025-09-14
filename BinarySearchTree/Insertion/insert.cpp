#include <iostream>
#include <vector>
using namespace std;


struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key  = x;
        left = right = NULL;
    }
};


Node* insert(Node *root, int x){
    if(root == NULL)        return  new Node(x);

    if(x < root -> key)     root -> left  = insert(root -> left , x);
    if(x > root -> key)     root -> right = insert(root -> right, x);
    return  root;
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
    root -> right -> right = new Node(18);    

    cout << "BEFORE Insertion | INORDER Traversal : ";
    inorderTraversal(root);

    root = insert(root, 20);
    cout << "\nAFTER  Insertion | INORDER Traversal :  ";
    inorderTraversal(root);


}

// TIME  COMPLEXITY  : O(h) per insertion | Balanced: O(log n), Worst (skewed): O(n)
// SPACE COMPLEXITY  : O(h), where h is the height of the BST (worst case O(n))