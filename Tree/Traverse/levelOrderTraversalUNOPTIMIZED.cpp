#include <iostream>
#include <algorithm>
using namespace  std;


//UNOPTIMIZED APPROACH  -- using Height Of Tree + Kth Nodes from Root
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

void NodeAtDistance(Node *root, int k){
    if(root == NULL)    return  ;    
    if(k == 0)  cout << root -> key << " ";
    else{
        NodeAtDistance(root->left, k-1);
        NodeAtDistance(root->right, k-1);
    }
}

void levelOrderTraversal(Node *root){
    int h = height(root);
    int i = 0;
    while(i != h){
        NodeAtDistance(root, i);
        i++;
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


    levelOrderTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n * h)
//                   : Balanced tree  -> O(n log n)
//                   : Skewed tree    -> O(n^2)
//
// SPACE COMPLEXITY  : O(h), due to recursion stack