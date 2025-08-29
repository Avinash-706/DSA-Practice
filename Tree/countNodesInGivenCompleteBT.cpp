#include <iostream>
#include <cmath>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};


int countNodes(Node* root) {
    if (root == nullptr)    return  0;

    int lh = 0, rh = 0;
    Node* curr = root;

    while (curr != nullptr) {
        lh++;
        curr = curr->left;
    }

    curr = root;
    while (curr != nullptr) {
        rh++;
        curr = curr->right;
    }

    if (lh == rh)   return  static_cast<int>(pow(2, lh)) - 1;

    return  1 + countNodes(root->left) + countNodes(root->right);
}


int main() {
    // Constructing tree
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(100);

    cout << "Total number of nodes in the tree = " << countNodes(root) << endl;

    return 0;
}


// RECURRENCE RELATION:
// The work done at each step is calculating the left and right heights, which takes O(h) or O(log n) time, where 'h' is the height of the tree.
// In the worst case, the algorithm makes one recursive call on a subtree of height h-1. The other recursive call is on a perfect binary tree,
// which resolves in O(h) time and doesn't recurse further.
// Therefore, the recurrence relation is: T(h) = T(h-1) + O(h).
// ========================================================
// -> Recurrence:  T(n) = T(2n/3) + Θ(log n)
//    • T(n): Time to count nodes
//    • Θ(log n): work for height calculation
//    • T(2n/3): recursion on larger subtree
//
// -> Recursion depth: log_(3/2)(n)
// -> Work per level: Θ(log n)
// -> Total work: O(log_(3/2) n * log n)
//
// -> Change of base: log_(3/2) n = O(log n)
// -> Final Complexity: O((log n)²)

// TIME COMPLEXITY: O((log n)^2) or O(log n * log n)
// Since the height (h) of a complete binary tree is log n, the O(h^2) complexity translates to O((log n)^2). This is significantly
// more efficient than the standard O(n) traversal for counting nodes.

// SPACE COMPLEXITY: O(log n)
// The space complexity is determined by the maximum depth of the recursion stack. Since the algorithm only ever recurses
// down one path of the tree at any time, the maximum depth is the height of the tree, which is O(h) or O(log n).
