#include <iostream>
#include <queue>
using namespace std;


struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


int countIfComplete(Node* root) {
    if (!root) return 0;

    queue<Node*> q;
    q.push(root);

    bool foundNull = false;
    int count = 0;

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr == NULL) {
            foundNull = true;
        } else {
            if (foundNull) {    // Found a non-null after a null → not complete
                return -1;
            }
            count++;
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    return count;
}


int main() {
    Node *root  = new Node(10);
    root->left  = new Node(20);
    root->right = new Node(30);

    root->left->left   = new Node(40);
    root->left->right  = new Node(50);
    root->right->left  = new Node(60);
    root->right->right = new Node(70);

    root->left->left->left  = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(100);

    int ans = countIfComplete(root);

    if (ans == -1)  cout << "Complete Binary Tree : NO" << endl;
    else            cout << "Complete Binary Tree : YES, Nodes = " << ans << endl;

    return 0;
}

// TIME  COMPLEXITY : O(n), where 'n' is number of nodes
// SPACE COMPLEXITY : O(n), for queue in worst case
