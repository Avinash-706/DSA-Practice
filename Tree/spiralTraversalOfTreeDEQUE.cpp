#include <iostream>
#include <queue>
using namespace std;


// DEQUE IMPLEMENTATION
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};


void spiralTraversal(Node *root){
    if(root == NULL) return;

    deque<Node*> dq;
    int level = 1;
    dq.push_front(root);

    while(!dq.empty()){
        int count = dq.size();
        if(level % 2 == 1){
            for(int i = 0 ; i < count ; i++){
                Node *curr = dq.back();
                dq.pop_back();

                cout << curr->key << " ";
        
                if(curr->left  != NULL) dq.push_front(curr->left);
                if(curr->right != NULL) dq.push_front(curr->right);
            }
        } else {
            for(int i = 0 ; i < count ; i++){
                Node *curr = dq.front();
                dq.pop_front();

                cout << curr->key << " ";
                if(curr->right != NULL) dq.push_back(curr->right);
                if(curr->left  != NULL) dq.push_back(curr->left);
            }
        }
        level++;
    }
}


int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->right->left  = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);

    spiralTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(w), where 'w' is the maximum width of the binary tree
//                   : Worst case (perfect tree) : O(n)
//                   : Best case (skewed tree)   : O(1)