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
    Node (int x){
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
    cout << endl;
}

void deleteLastNode(Node *head){
    if(head == NULL){
        cout << "NULL" << endl;
        return ;
    }

    if(head -> next == NULL){
        delete head;
        cout << "NULL" << endl;
        return;
    }

    Node *curr = head;
    while(curr -> next -> next != NULL){
        curr = curr -> next;
    }
    delete curr -> next;
    curr -> next = NULL;
    return ;
}

int main() {
    Node *head = NULL;
    head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    printLinkedList(head);

    deleteLastNode(head);

    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY - O(n), where 'n' is the number of nodes of the Linked List
// SPACE COMPLEXITY - O(1)