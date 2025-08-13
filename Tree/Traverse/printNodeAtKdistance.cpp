#include <iostream>
using namespace  std;


// It is a type of LeveL-Order(BFS) traversal but NOT Entirely The Same 
struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


void NodeAtDistance(Node *root, int k){
    if(root == NULL)    return;
    if(k == 0)  cout << root -> key << " ";
    else{
        NodeAtDistance(root->left, k-1);
        NodeAtDistance(root->right, k-1);
    }
}


int main(){
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(70);
    root -> right -> right -> right = new Node(80);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> left -> right -> left = new Node(70);
    root -> left -> right -> right = new Node(80);

    int k;
    cout << "Enter the Distance From Root Node : ";
    cin >> k;

    cout << "Node at K-Distance from Root : ";
    NodeAtDistance(root, k);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the total number of nodes  
// SPACE COMPLEXITY  : O(h), where 'h' is the height of the tree (recursive stack space)