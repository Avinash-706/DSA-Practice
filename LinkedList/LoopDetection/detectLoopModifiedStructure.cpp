#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//OPTIMIZED APPROACH - IF MODIFICATION TO LINKEDLIST ARE ALLOWED

struct Node{
    int data;
    Node *next;
    bool visited;
    Node(int x){
        data = x;
        next = NULL;
        visited = false;
    }
};


bool detectLoop(Node *head){
    Node *curr = head;

    while(curr != NULL){
        curr -> visited = true;
        if(curr->next != NULL && curr->next->visited == true)    return true;
        curr = curr -> next;
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
// SPACE COMPLEXITY  : O(n) (includes input + visited field)
// AUXILIARY SPACE	 : O(1) (no extra data structures)
