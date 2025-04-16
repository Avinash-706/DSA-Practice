#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//RECURSIVE APPROACH
struct Node {
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
    cout << endl;
}


int search(Node *head, int num, int i = 1){
    if(head == NULL)    return -1;
    if(head -> data == num)    return i;
    return    search(head -> next, num, i+1);
}


int main() {
    Node *head = NULL;
    head = new Node(10);
    head -> next = new Node(20); 
    head -> next -> next = new Node(30); 
    head -> next -> next -> next = new Node(40);
    
    printLinkedList(head);

    Node *curr = head;
    cout << "The position of 30 : " << search(head, 30) << endl;
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the linked list
// SPACE COMPLEXITY  : O(n), due to recursive call stack
