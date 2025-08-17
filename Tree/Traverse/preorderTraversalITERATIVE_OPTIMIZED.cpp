#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

// OPTIMIZED SOLUTION : Pushes only the right child into the stack. It goes down the left subtree directly
// ITERATIVE PREORDER TRAVERSAL : SPACE OPTIMIZED
void iterativePreorder(Node *root) {
    if (root == NULL) return;

    stack<Node*> st;
    Node *curr = root;

    while (curr != NULL || st.empty() == false) {
        while (curr != NULL) {
            cout << curr->key << " ";
            if (curr->right != NULL)    st.push(curr->right);
            curr = curr->left;
        }

        if (st.empty() == false) {
            curr = st.top();
            st.pop();
        }
    }
}

int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(60);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> left -> right -> left = new Node(70);
    root -> left -> right -> right = new Node(80);

    cout << "Preorder Traversal: ";
    iterativePreorder(root);

    return 0;
}

// TIME  COMPLEXITY : O(n)
// SPACE COMPLEXITY : O(h), where 'h' is the height of the binary tree  
//                  : Worst Case  O(n), when tree is completely skewed  
//                  : Best Case   O(log n), for a balanced binary tree  