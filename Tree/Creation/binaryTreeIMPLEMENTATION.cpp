#include <iostream>
using namespace  std;

//IMPLEMENTATION OF BINARY TREE
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


int main(){
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    return 0;
}