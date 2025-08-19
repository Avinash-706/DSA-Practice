#include <iostream>
#include <queue>
using namespace  std;


struct Node{
    int key;
    Node *left, *right;
    Node (int x){
        key = x;
        left = right = NULL;
    }
};


int maxWidth(Node *root){
    queue<Node *> q;
    q.push(root);
    int res = 0;
    while(!q.empty()){
        int count = q.size();
        res = max(count, res);

        for(int i  = 0 ; i < count ; i++){
            Node *curr = q.front();
            q.pop();
        
            if(curr -> left  != NULL)    q.push(curr -> left);
            if(curr -> right != NULL)    q.push(curr -> right);
        }
    }
    return res;
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


    cout << "Maximum Width of The Binary Tree : " << maxWidth(root);
    return 0;
}

// TIME  COMPLEXITY  : O(n), in the worst case (complete binary tree, last level has ~n/2 nodes)
// SPACE COMPLEXITY  : O(n), due to the extra space required by queue
//                   : O(1) in best case (skewed tree)