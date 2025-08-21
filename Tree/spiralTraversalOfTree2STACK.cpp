#include <iostream>
#include <stack>
using namespace std;


// 2 STACK IMPLEMENTATION
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


void spiralTraversal(Node *root){
    if(root == NULL) return;

    stack<Node *> s1; 
    stack<Node *> s2; 

    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *curr = s1.top(); 
            s1.pop();
            
            cout << curr->key << " ";
            
            if(curr->left) s2.push(curr->left);
            if(curr->right) s2.push(curr->right);
        }

        while(!s2.empty()){
            Node *curr = s2.top();
            s2.pop();
            
            cout << curr->key << " ";
            
            if(curr->right) s1.push(curr->right);
            if(curr->left) s1.push(curr->left);
        }
    }
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

    spiralTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), each node is visited exactly once
// SPACE COMPLEXITY  : O(w), maximum nodes in a level (stack size)
//                   : Worst case (perfect tree) : O(n/2) ≈ O(n)
//                   : Best case (skewed tree)   : O(1)