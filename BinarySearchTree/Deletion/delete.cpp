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


// smallest in right subtree
Node* getSuccessor(Node* curr) {
    curr = curr->right;
    while (curr != NULL && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}


Node* delNode(Node* root, int x) {
    if (root == NULL) return root;

    if (root->key > x) {
        root->left = delNode(root->left, x);
    } 
    else if (root->key < x) {
        root->right = delNode(root->right, x);
    } 
    else {  
        // Node to delete found
        if (root->left == NULL) {       // case 1 & 2
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) { // case 1 & 2
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {   // case 3: two children
            Node* succ = getSuccessor(root);
            root->key = succ->key;   // copy successor key
            root->right = delNode(root->right, succ->key); // delete successor
        }
    }
    return root;
}


void inorderTraversal(Node *root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}


int main() {
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(10);
    root->left->right = new Node(40);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    cout << "BEFORE Deletion | INORDER Traversal: ";
    inorderTraversal(root);

    root = delNode(root, 50);

    cout << "\nAFTER Deletion (50) | INORDER Traversal: ";
    inorderTraversal(root);

    return 0;
}

// TIME  COMPLEXITY  : O(h) 
//                   : Balanced BST : O(log n) 
//                   : Skewed BST   : O(n)
// SPACE COMPLEXITY  : O(h), due to recursion call stack, (O(log n) balanced, O(n) worst case)
