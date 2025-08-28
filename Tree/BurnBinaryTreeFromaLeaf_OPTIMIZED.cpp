#include <iostream>
#include <algorithm>
using namespace std;


// OPTIMIZED -- RECURSION
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

int res = 0;   // stores total burn time

int burnFromLeaf(Node *root, int leaf, int &dist) {
    if (root == NULL) return 0;

    if (root->key == leaf) {
        dist = 0;
        return 1;
    }

    int ldist = -1, rdist = -1;
    int lh = burnFromLeaf(root->left, leaf, ldist);
    int rh = burnFromLeaf(root->right, leaf, rdist);

    // If leaf found in left subtree
    if (ldist != -1) {
        dist = ldist + 1;
        res = max(res, dist + rh);  // fire spreads through right subtree
    }
    // If leaf found in right subtree
    else if (rdist != -1) {
        dist = rdist + 1;
        res = max(res, dist + lh);  // fire spreads through left subtree
    }

    return max(lh, rh) + 1;  // return height of this subtree
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->right = new Node(5);
    root->left->left = new Node(30);
    root->left->left->right = new Node(50);
    root->left->left->left = new Node(40);
    root->left->left->left->left = new Node(60);
    root->left->left->left->left->left = new Node(70);

    int dist = -1;
    burnFromLeaf(root, 50, dist);

    cout << "Distance of leaf from root: " << dist << endl;
    cout << "Minimum time to burn the tree from leaf 50: " << res << endl;

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree
//                    (Worst case: O(n), Best case: O(log n))