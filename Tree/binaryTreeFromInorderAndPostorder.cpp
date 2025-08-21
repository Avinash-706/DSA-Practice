#include <iostream>
#include <unordered_map>
using namespace std;


// BINARY TREE FROM INORDER + POSTORDER
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = nullptr;
    }
};

Node* buildTreeUtil(int in[], int post[], int is, int ie, int &postIndex, unordered_map<int,int> &mp) {
    if (is > ie) return nullptr;

    Node* root = new Node(post[postIndex--]);
    
    if (is == ie) return root;
    
    int inIndex = mp[root->key];
    
    root->right = buildTreeUtil(in, post, inIndex + 1, ie, postIndex, mp);
    root->left  = buildTreeUtil(in, post, is, inIndex - 1, postIndex, mp);
    
    return root;
}

Node* buildTree(int in[], int post[], int n) {
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) {
        mp[in[i]] = i;
    }
    int postIndex = n - 1;
    return buildTreeUtil(in, post, 0, n - 1, postIndex, mp);
}

void printPreorder(Node* root) {
    if (root == nullptr) return;
    cout << root->key << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    int in[]   = {20, 10, 40, 30, 50};
    int post[] = {20, 40, 50, 30, 10};
    int n = 5;

    Node* root = buildTree(in, post, n);

    cout << "Preorder traversal of constructed tree: ";
    printPreorder(root);
}

// TIME  COMPLEXITY  : O(n), where n is number of nodes
// SPACE COMPLEXITY  : O(n), for hashmap + O(h) recursion stack
//                   : worst case O(n) for skewed tree, O(log n) for balanced tree
