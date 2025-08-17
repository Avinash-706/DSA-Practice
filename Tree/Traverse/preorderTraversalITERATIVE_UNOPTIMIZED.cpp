#include <iostream>
#include <stack>
using namespace  std;


//ITERATIVE SOLUTION : Preorder Traversal in BINARY TREE : ( ROOT | LEFT | RIGHT ) 
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


void preorderTraversal(Node *root){
    stack<Node *> s;
    Node *curr = root;
    s.push(curr);
    while (!s.empty()){
        curr = s.top();
        cout << curr -> key << " ";
        s.pop();
        if(curr -> right != NULL)   s.push(curr -> right);
        if(curr -> left != NULL)    s.push(curr -> left);
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

    cout << "PreOrder Traversal : ";
    preorderTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the binary tree
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the binary tree (due to explicit stack)
//                   : Worst case (skewed tree)   : O(n)
//                   : Best case (balanced tree)  : O(log n)