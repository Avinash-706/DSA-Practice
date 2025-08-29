#include <iostream>
#include <vector>
using namespace std;


struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


void serialise(Node* root, vector<int> &arr) {
    if(root == NULL) {
        arr.push_back(-1);
        return;
    }

    arr.push_back(root -> key);
    serialise(root -> left , arr);
    serialise(root -> right, arr);
}


const int EMPTY = -1;
int indexVal = 0;
Node* deserialise(vector<int> &arr) {
    if(indexVal == arr.size())  return  NULL;

    int val = arr[indexVal++];
    if(val == EMPTY)    return  NULL;

    Node* root1  = new Node(val);
    root1->left  = deserialise(arr);
    root1->right = deserialise(arr);

    return root1;
}


void preorder(Node* root) {
    if(root == NULL)    return;
    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}


int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->left->left->right = new Node(40);

    vector<int> arr;
    serialise(root, arr);

    cout << "After Serialization : ";
    for(int i : arr) cout << i << " ";
    cout << endl;

    Node* root1 = deserialise(arr);

    cout << "Deserialization (Preorder Traversal): ";
    preorder(root1);
    cout << endl;

    return 0;
}

// TIME  COMPLEXITY  : Overal Complexity :   O(n), where 'n' is the number of nodes in the tree
//                   : Serialization     :   O(n)
//                   : Deserialization   :   O(n)

// SPACE COMPLEXITY : O(n)
//                  : O(n) for storing serialized array
//                  : O(h) recursion stack space (worst case h = n for skewed tree)
