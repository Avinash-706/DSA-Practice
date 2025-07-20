#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//// Using a hash set to store visited nodes
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


bool detectLoop(Node *head){
    unordered_set<Node *> visitedNodes;
    for(Node *curr = head; curr != NULL; curr = curr-> next){
        if(visitedNodes.find(curr) != visitedNodes.end()){
            return true;
        }
        visitedNodes.insert(curr);
    }
    return false;
}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    Node *temp = head->next->next;

    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = temp; // creating Loop

    bool isLoop = detectLoop(head);

    cout << "Loop Detected :  " << (isLoop ? "Yes" : "No");

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(n), due to the hash set storing addresses of visited nodes  
