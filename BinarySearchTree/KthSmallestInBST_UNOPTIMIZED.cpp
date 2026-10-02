#include<iostream>
using namespace std;

// UNOPTIMIZED APPROACH / Naive Approach
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};


void printKth(Node *root, int k, int &count){
    if(root!=NULL){
        printKth(root->left,k,count);

        count++; 
        if(count==k){
            cout << root->key; 
            return;
        }
        
        printKth(root->right,k,count);
    }
} 

int main() {
	
    // Binary search Tree
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

	int k=3;
	int count=0;
	cout<<"Kth Smallest: ";
	printKth(root,k,count);
	
	return 0;
}

//TIME COMPELXITY  : Best Case: O(h + k), where h -> height of bst, k -> kth smallest element we want | Worst Case : O(n), where n -> nodes in a bst
//SPACE COMPLEXITY : O(h) (AUXILIARY SPACE), where h -> maximum height of the best