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
    Node *prev;
    Node *next;
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


Node *reverseLinkedList(Node *head){
    Node *curr = head;
    Node *temp = nullptr;

    while(curr != NULL){
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;

        // Move to the next node in original order (which is prev now)
        curr = curr -> prev;
    }

    return temp -> prev;
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

    
    cout << "REVERSE OF A LINKED LIST : ";
    head = reverseLinkedList(head);
    printLinkedList(head);

    return 0;
}