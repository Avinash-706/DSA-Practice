#include <iostream>
using namespace std;


struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


int getSize(Node *root){
    if(root == NULL)    return 0;
    return  1 + getSize(root -> left) + getSize(root -> right);
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


    cout << "Size of the Binary Tree : " << getSize(root);
    return 0;
}

//TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in a tree
//SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree (Recursion Call Stack)
//                        , at a time there will be only 'h' Function Calls In The Call Stack 