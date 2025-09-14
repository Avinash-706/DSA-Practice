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


bool searchBST(Node *root, int n){
    if(root == NULL)        return false;
    if(root -> key == n)    return true;

    if(root -> key >  n)    return  searchBST(root -> left, n);
    if(root -> key <  n)    return  searchBST(root -> right, n);
    return  false;
}


int main() {
    vector<int> arr = {20, 15 , 30, 40, 50, 12, 18, 35, 80, 7};
    Node *root = bst(root, arr);

    inorderTraversal(root);
    
    int n;
    cout << endl << "\nEnter the element to search : ";
    cin >> n;
    cout << "Is " << n << " present in the Binary Search Tree : " << (searchBST(root, n) ? "Yes" : "No") << endl;
}

// TIME  COMPLEXITY  : O(h) 
// SPACE COMPLEXITY  : O(h), call stack