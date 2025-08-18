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


// ITERATIVE Solution using a QUEUE : BFS (Breadth-First Search) Approachh
bool checkSum(Node *root) {
    if(root == NULL) return true;
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Skip leaf nodes
        if(curr->left == NULL && curr->right == NULL)   continue;

        int sum = 0;
        if(curr->left) {
            sum += curr->left->key;
            q.push(curr->left);
        }
        if(curr->right) {
            sum += curr->right->key;
            q.push(curr->right);
        }

        if(curr->key != sum)    return  false;
    }

    return true;  
}


int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left  = new Node(3);
    root->left->right = new Node(5);

    cout << "Does the Binary Tree Support CHILDREN SUM PROPERTY : " << (checkSum(root) ? "Yes" : "No");

    return 0;
}

// TIME  COMPLEXITY: O(n), each node is visited exactly once
// SPACE COMPLEXITY: O(n), in worst case (queue may store all nodes at the last level)