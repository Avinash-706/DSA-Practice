#include <iostream>
#include <stack>
using namespace std;


// UNOPTIMIZED SOLUTION 
struct Node {
    int key;
    Node *left, *right;
    Node(int x) { 
        key = x;
        left = right = NULL;
    }
};


int height(Node *root){
    if(root == NULL)    return  0;
    return  max(height(root -> left), height(root -> right)) + 1;
}

int spiralTraversal(Node *root){
    if(root == NULL)    return  0;
    int d1 = 1 + height(root -> left) + height(root -> right) ; 

    int d2 = spiralTraversal(root -> left);
    int d3 = spiralTraversal(root -> right);
    return  max(d1,max(d2, d3));
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

    cout << "Diameter of a Binary Tree : " << spiralTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n²), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree 
//                    (O(n) in worst case, O(log n) in best case)
