#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};


void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
    cout << endl;
}

void deleteTailNode(Node *head){

    if(head == NULL){
        cout << "NULL ";
        return ;
    }
    if(head -> next == NULL){
        delete head;
        cout << "NULL" ;
        return;
    }


    Node *temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
    
    printList(head);
}

int main() {
    Node *head = NULL;
    head = new Node(10);
    head -> next =  new Node(20);
    head -> next -> next =  new Node(30);
    // head -> next -> next -> next =  new Node(40);

    printList(head);

    deleteTailNode(head);
    return 0;
}

// TIME COMPLEXITY - O(n), where 'n' is the given number of nodes in the Linked List
//SPACE COMPLEXITY - O(1)