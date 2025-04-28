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


void printList(Node *head) {
    if (head == NULL) return;
    Node *curr = head;

    do {
        cout << curr -> data << "  ";
        curr = curr -> next;
    } while (curr != head);

    cout << endl;
}


Node *insertAtHead(Node *head, int num){
    Node *temp = new Node(num);
    if(head == NULL ){
        temp -> next = temp;
        temp -> prev = temp;
        return temp;
    }
    temp -> next = head; 
    temp -> prev = head -> prev;
    head -> prev -> next = temp;
    head -> prev = temp;
    return temp;
}


int main() {
    Node *head  = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head  -> prev = temp3;
    head  -> next = temp1;

    temp1 -> prev = head;
    temp1 -> next = temp2;

    temp2 -> prev = temp1;
    temp2 -> next = temp3;

    temp3 -> prev = temp2;
    temp3 -> next = head;

    cout << "Original List             :  ";
    printList(head);

    head = insertAtHead(head, 5);

    cout << "After Inserting 5 at Head :  ";
    printList(head);

    return 0;
}