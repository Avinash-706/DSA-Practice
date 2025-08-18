#include <iostream>
#include <queue>
using namespace  std;


struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};

//  DFS Approach : Pre-Order Traversal
bool checkSum(Node *root) {
    if(root == NULL)    return  true;
    if(root->left == NULL && root->right == NULL)   return  true;

    if     (root->left == NULL)         return root->key == root->right->key && checkSum(root->right);
    else if(root->right == NULL)        return  root->key == root->left->key && checkSum(root->left);
    else    return  root->key == root->left->key + root->right->key && checkSum(root->left) && checkSum(root->right);
}


int main(){
    Node *root = new Node(20);
    root -> left = new Node(8);
    root -> right = new Node(12);
    root -> left -> left  = new Node(3);
    root -> left -> right  = new Node(5);

    cout << "Does the Binary Tree Supports CHILDREN SUM PROPERTY : " << (checkSum(root) ? "Yes" : "No");
    return 0;
}

// TIME  COMPLEXITY  : O(n), since each node is visited exactly once
// SPACE COMPLEXITY  : O(h), where h is the height of the tree (due to recursion stack)
//                   : Worst case (skewed tree)   : O(n)
//                   : Best case (balanced tree)  : O(log n)