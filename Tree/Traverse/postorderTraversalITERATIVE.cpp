#include <iostream>
#include <stack>
#include <vector>
using namespace  std;


//ITERATIVE SOLUTION : PostOrder Traversal in BINARY TREE : ( LEFT | RIGHT | ROOT ) 
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};

//FIRST WE TRAVERSE : Root → Right → Left and then REVERSE IT
void postorderTraversal(Node* root) {
    if(root == NULL) return;

    stack<Node*> s;
    vector<int> result;
    s.push(root);

    while(!s.empty()) {
        Node* curr = s.top();
        s.pop();
        result.push_back(curr->key);

        if(curr->left)  s.push(curr->left);
        if(curr->right) s.push(curr->right);
    }

    // reverse result to get Left → Right → Root
    for(auto it = result.rbegin(); it != result.rend(); it++) {
        cout << *it << " ";
    }
}



int main(){
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(60);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> left -> right -> left = new Node(70);
    root -> left -> right -> right = new Node(80);

    cout << "PostOrder Traversal : ";
    postorderTraversal(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the binary tree
// SPACE COMPLEXITY  : O(n), due to use of an extra vector storing all nodes
//                   : Stack uses O(h), where 'h' is the height of the binary tree
//                   : Total = O(n + h) ≈ O(n)
