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

Node *insertBegin(Node *head, int num){
    Node *temp = new Node(num);
    temp -> next = head;
    if(head != NULL)        head -> prev = temp;
    return temp;
}


int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head  -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;

    cout << "BEFORE Insertion of 5 : ";
    printLinkedList(head);

    head = insertBegin(head, 5);
    
    cout << "AFTER  Insertion of 5 : ";
    printLinkedList(head);

    return 0;
}