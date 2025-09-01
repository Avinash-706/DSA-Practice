#include <iostream>
#include <vector>
using namespace std;


struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key  = x;
        left = right = NULL;
    }
};


Node* createBST(Node *root, int val){
    if(root == NULL)        return new Node(val);

    if(val < root -> key)   root -> left  = createBST(root -> left , val); 
    if(val > root -> key)   root -> right = createBST(root -> right, val);
    
    return root;
}


Node* bst(Node *root, vector<int> &arr){
    if(arr.empty())     return  NULL;

    root = new Node(arr[0]);
    for(int i = 1; i < arr.size(); i++)     root = createBST(root, arr[i]);

    return  root;
}



void inorderTraversal(Node *root){
    if(root == NULL)    return;
    inorderTraversal(root -> left );
    cout << root -> key << " ";
    inorderTraversal(root -> right);
}

int main() {
    vector<int> arr = {20, 15 , 30, 40, 50, 12, 18, 35, 80, 7};
    Node *root = bst(root, arr);

    inorderTraversal(root);
}

// TIME  COMPLEXITY  : O(n log n) |  WORST CASE (if array is sorted) : O(n^2) 
// SPACE COMPLEXITY  : O(h), where h is the height of the BST (worst case O(n))