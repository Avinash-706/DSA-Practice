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
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
}

Node *insertEnd(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL)    return temp;
    Node *curr = head;
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = temp;
    return head;
}

int main() {
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printLinkedList(head);
    return 0;
}