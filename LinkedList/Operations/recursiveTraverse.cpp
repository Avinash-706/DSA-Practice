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
    Node (int x) {
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


int main() {
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    Node *head = NULL, *tail = NULL;
    
    for(int i = 0 ; i < n ; i++){   
        int input;
        cin >> input;
        Node *newNode = new Node(input);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    printLinkedList(head);

    return 0;
}