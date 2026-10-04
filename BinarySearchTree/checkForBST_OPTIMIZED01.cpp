#include <bits/stdc++.h>
using namespace std;

// OPTIMIZED APPROACH - 01
struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = right = NULL;
    }
};

bool isBST(int lower, Node *root, int upper)
{
    if (root == NULL)
        return true;

    if (root->key > lower && root->key < upper)
    {
        if (!isBST(lower, root->left, root->key))
            return false;

        if (!isBST(root->key, root->right, upper))
            return false;

        return true;
    }

    else{
        return false;
    }
}

int main()
{
    Node *root = new Node(80);

    root->left = new Node(70);
    root->right = new Node(90);

    root->left->left = new Node(100);
    root->left->right = new Node(75);

    root->right->left = new Node(85);
    root->right->right = new Node(100);

    int lower = INT_MIN;
    int upper = INT_MAX;

    if (isBST(lower, root, upper))
        cout << "RESULT : Is BST";
    else
        cout << "RESULT : Not a BST";

    return 0;
}

// TIME COMPLEXITY : O(n), where 'n' is the number of nodes.
// SPACE COMPLEXITY: Balanced Tree = O(log n) | Worst Case (Skewed Tree) = O(n)