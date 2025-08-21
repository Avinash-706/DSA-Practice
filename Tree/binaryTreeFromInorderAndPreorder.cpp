#include <iostream>
#include <unordered_map>
using namespace std;


// BINARY TREE FROM INORDER + PREORDER
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = nullptr;
    }
};

int preIndex = 0;
Node* buildTreeUtil(int in[], int pre[], int is, int ie, unordered_map<int,int> &mp) {
    if (is > ie) return nullptr;

    Node* root = new Node(pre[preIndex++]);

    if (is == ie) return root;

    int inIndex = mp[root->key];

    root->left  = buildTreeUtil(in, pre, is, inIndex - 1, mp);
    root->right = buildTreeUtil(in, pre, inIndex + 1, ie, mp);

    return root;
}


Node* buildTree(int in[], int pre[], int n) {
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) {
        mp[in[i]] = i;
    }
    int preIndex = 0;
    return buildTreeUtil(in, pre, 0, n - 1, mp);
}


void printPostorder(Node* root) {
    if (root == nullptr) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->key << " ";
}

int main() {
    int in[]  = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};
    int n = 5;

    Node* root = buildTree(in, pre, n);

    cout << "Postorder traversal of constructed tree: ";
    printPostorder(root);
}

// TIME  COMPLEXITY  : O(n), where n is number of nodes
// SPACE COMPLEXITY  : O(n), for hashmap + O(h) recursion stack
//                   : worst case O(n) for skewed tree, O(log n) for balanced tree