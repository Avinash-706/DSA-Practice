#include <iostream>
using namespace  std;


//PostOrder Traversal in BINARY TREE : ( LEFT | RIGHT | ROOT ) 
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};

void postorderTraversal(Node *root){
    if(root != NULL){
        postorderTraversal(root -> left);
        postorderTraversal(root -> right);
        cout << root -> key << " ";
    }
}


int main(){
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(60);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> left -> right -> left = new Node(70);
    root -> left -> right -> right = new Node(80);

    cout << "PostOrder Traversal : ";
    postorderTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the binary tree  
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the binary tree (due to recursion stack)  
//                   : Worst case (skewed tree): O(n)
//                   : Best case (balanced tree): O(log n)