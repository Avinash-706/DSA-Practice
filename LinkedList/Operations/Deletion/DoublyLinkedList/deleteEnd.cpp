#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};


void printLinkedList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  " ;
        curr = curr -> next;
    }
    cout << endl;
}

Node *deleteEnd(Node *head){
    if(head == NULL)    return NULL;
    if(head -> next == NULL)   return NULL;

    Node *curr = head;
    while(curr -> next -> next != NULL){
        curr = curr -> next;
    }
    Node *last = curr -> next;
    curr -> next = nullptr;
    delete last;

    return head;
}

int main() {
    Node *head = NULL;
    head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head  -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    temp2 -> next = temp3;
    temp3 -> prev = temp2;

    cout << "ORIGINAL LINKED LIST :  ";
    printLinkedList(head);

    head = deleteEnd(head);
    cout << "AFTER  END DELETION  :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the linked list
// SPACE COMPLEXITY  : O(1)
