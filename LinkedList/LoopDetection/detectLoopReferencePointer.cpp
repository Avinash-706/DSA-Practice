#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//OPTIMIZED APPROACH - Modification to the LinkedList vai Pointing the next to the a Dummy/Reference Pointer
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


bool detectLoop(Node *head){
    Node *curr = head;
    Node *temp = new Node(0); // dummy / reference pointer
    while(curr != NULL){
        if(curr->next == NULL) return false;
        if(curr->next == temp) return true;
        Node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
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
// SPACE COMPLEXITY  : O(1)
