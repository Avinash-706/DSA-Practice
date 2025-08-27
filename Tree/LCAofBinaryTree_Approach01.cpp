#include <iostream>
#include <vector>
using namespace std;

// UNOPTIMIZED APPROACH : Takes Extra Space for VECTOR
struct Node {
    int key;
    Node *left, *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

bool findPath(Node *root, vector<Node*> &v, int n){
    if(root == NULL)    return  false;
    
    v.push_back(root);
    if(root->key == n)  return  true;
    
    if(findPath(root->left, v, n) || findPath(root->right, v, n))   return  true;
    
    v.pop_back();
    return  false;
}

Node* LCA(Node *root, int n1, int n2) {
    if(root == NULL)    return NULL;
    
    vector<Node*> v1, v2;
    if(!findPath(root, v1, n1) || !findPath(root, v2, n2))  return NULL;

    Node* res = NULL;
    for(int i = 0; i < v1.size() && i < v2.size(); i++) {
        if(v1[i] == v2[i])  res = v1[i];
        else    break;
    }
    return  res;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(50);
    root->right = new Node(60);
    root->left->left = new Node(70);
    root->left->right = new Node(20);
    root->left->left->left = new Node(40);
    root->left->right->left = new Node(90);
    root->left->right->right = new Node(80);
    root->left->right->left->left = new Node(30);

    Node* ans = LCA(root, 30, 80);
    if(ans != NULL) cout << "Lowest Common Ancestor of a Binary Tree : " << ans->key;
    else    cout << "Keys are not present in the tree";

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes
// SPACE COMPLEXITY  : O(h), due to recursion + path vectors 
//                    (worst case O(n), balanced case O(log n))