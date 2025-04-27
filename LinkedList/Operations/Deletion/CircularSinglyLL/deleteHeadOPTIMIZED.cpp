#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//OPTIMIZED APPROACH
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node *head){
    if(head == NULL){
        cout << "NULL" << endl;
        return;
    }

    cout << head -> data << "  ";
    for(Node *p = head -> next ; p != head ; p = p -> next){
        cout << p -> data << "  ";
    } 
    cout << endl;
}

Node *deleteHead(Node *head){
    if(head == NULL || head -> next == head){
        return NULL;
    }
    else{
        head->data = head->next->data;
        Node* temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}


int main() {
    Node *head = new Node(10);
    head -> next = new Node(20); 
    head -> next -> next = new Node(30); 
    head -> next -> next -> next = head; 

    cout << " Before Deletion : ";
    printLinkedList(head);

    head = deleteHead(head);
    cout << " After  Deletion : ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY : O(1), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY : O(1)
