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


Node* insertAtBegin(Node* head, int num) {
    Node* temp = new Node(num);
    if (head == NULL) {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;

    //swap the data of 'temp' and 'head'
    swap(head->data, temp->data);

    return head;
}


int main() {
    Node *head = new Node(10);
    head -> next = new Node(20); 
    head -> next -> next = new Node(30); 
    head -> next -> next -> next = head; 

    cout << "Before Insertion : ";
    printLinkedList(head);

    head = insertAtBegin(head, 5);
    
    cout << "After Insertion  : ";
    printLinkedList(head);
    return 0;
}

// TIME  COMPLEXITY  : O(1)
// SPACE COMPLEXITY  : O(1)