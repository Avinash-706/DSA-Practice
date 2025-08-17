#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};



//APPROACH 1 : 
int getSize(Node *root, int &currMax){
    if(root == NULL)    return 0;
    currMax = max(currMax, root -> key);
    int size = 1 + getSize(root -> left, currMax) + getSize(root -> right, currMax);
    return currMax;
}

//APPROACH 2:
int getMax(Node *root){
    if(root == NULL)    return  INT_MIN;
    return  max(root -> key, max(getMax(root -> left), getMax(root -> right))); 
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

    int currMax = INT_MIN;
    cout << "Max Element of the Binary Tree : " << getSize(root, currMax);
    cout << endl;
    cout << "Max Element of the Binary Tree : " << getMax(root);

    return 0;
}

//TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in a tree
//SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree (Recursion Call Stack)
//                        , at a time there will be only 'h' Function Calls In The Call Stack 