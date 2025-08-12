#include <iostream>
using namespace  std;


//HEIGHT OF THE BINARY TREE
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


int height(Node *root){
    if(root == NULL)    return  0;
    return  max(height(root -> left), height(root -> right)) + 1; 
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

    cout << "Height of Binary Tree : " << height(root) << endl;
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the binary tree  
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the binary tree (due to recursion stack)  
//                   : Worst case (skewed tree): O(n)
//                   : Best case (balanced tree): O(log n)