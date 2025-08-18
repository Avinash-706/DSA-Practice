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


// DFS Approach (Modified Preorder: Root → Right → Left)
int maxLevel = 0;
void rightView(Node *root, int level){
    if(root == NULL)    return ;
    if(maxLevel < level){
        cout << root -> key << " ";
        maxLevel = level;
    }
    rightView(root -> right, level + 1);
    rightView(root -> left , level + 1);
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

    cout << "Right View of the Binary Tree : ";
    rightView(root, 1);
    return 0;
}

// TIME  COMPLEXITY  : O(n), since each node is visited exactly once
// SPACE COMPLEXITY  : O(h), where h is the height of the tree (due to recursion stack)
//                   : Worst case (skewed tree)   : O(n)
//                   : Best case (balanced tree)  : O(log n)