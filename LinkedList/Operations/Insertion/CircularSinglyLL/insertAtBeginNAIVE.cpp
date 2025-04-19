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
}


Node *insertAtBegin(Node *head, int num){
    Node *temp = new Node(num);

    if (head == NULL) {
        temp -> next = head;
    }
    else{
        Node *curr = head;
        while(curr -> next != head){
            curr = curr -> next;
        }
        curr -> next = temp;
        temp -> next = head;
    }
    return temp;
}


int main() {
    Node *head = new Node(10);
    head -> next = new Node(20); 
    head -> next -> next = new Node(30); 
    head -> next -> next -> next = head; 

    head = insertAtBegin(head, 5);
    
    printLinkedList(head);
    return 0;
}

// TIME  COMPLEXITY  : O(n)
// SPACE COMPLEXITY  : O(1)