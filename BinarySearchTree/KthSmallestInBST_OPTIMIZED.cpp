#include <iostream>
using namespace std;

// AUGMENTED BST - Modified Structure for BST
// OPTIMIZED APPROACH
struct Node {
    int key;
    int lcount;
    Node* left;
    Node* right;

    Node(int k) {
        key = k;
        left = right = NULL;
        lcount = 0;
    }
};

Node* insertElement(Node* root, int x) {
    if (root == NULL) {
        return new Node(x);
    }

    if (x < root->key) {
        root->left = insertElement(root->left, x);
        root->lcount++;
    }
    else if (x > root->key) {
        root->right = insertElement(root->right, x);
    }

    return root;
}

Node* kthSmallest(Node* root, int k) {
    if (root == NULL)
        return NULL;

    int count = root->lcount + 1;

    if (count == k)
        return root;

    if (count > k)
        return kthSmallest(root->left, k);

    return kthSmallest(root->right, k - count);
}

int main() {
    Node* root = NULL;

    int keys[] = {20, 8, 22, 4, 12, 10, 14};

    for (int x : keys)
        root = insertElement(root, x);

    int k = 4;

    Node* res = kthSmallest(root, k);

    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->key;

    return 0;
}

//TIME  COMPLEXITY : O(h), where 'h' is height of the tree.
//SPACE COMPLEXITY : O(h), where 'h' is height of the tree.