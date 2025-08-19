#include <iostream>
#include <algorithm>
using namespace  std;


// UNOPTIMIZED APPROACH
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};

int height(Node *root){
    if(root == NULL)    return 0;
    return  1 + max(height(root-> left),  height(root -> right));
}

bool checkBalance(Node *root){
    if(root != NULL){
        int h1 = height(root -> left);
        int h2 = height(root -> right);
        if(abs(h1 - h2) > 1)   return   false ;  

        return checkBalance(root -> left) && checkBalance(root -> right);
    }
    return true;
}


int main(){
    Node *root = new Node(20);
    root -> left = new Node(10);
    root  -> right = new Node (4);
    root  -> right -> right = new Node (4);

    cout << "Is the Binary Tree BALANCED ? : " << (checkBalance(root) ? "Yes" : "No");
    return 0;
}

// TIME COMPLEXITY  : O(n²) worst case, O(n log n) best case
// SPACE COMPLEXITY : O(h), where h = height of tree
//                  : Worst case (skewed tree)   : O(n)
//                  : Best case (balanced tree)  : O(log n)