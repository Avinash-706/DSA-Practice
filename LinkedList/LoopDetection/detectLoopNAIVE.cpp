#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//Naive Implementation
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


bool detectLoop(Node *head){
    bool isLoop = false;
    Node *curr = head;
    while(curr != NULL){
        Node *check = head;
        while(check != curr){
            if(check == curr -> next){
                return true;
            }
            check = check -> next;
        }
        curr = curr -> next;
    }
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

// TIME  COMPLEXITY  : O(n^2), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)
