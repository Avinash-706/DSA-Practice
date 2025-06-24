#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//RECURSIVE APPROACH
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
        cout << curr->data << "  ";
        curr = curr->next;
    }
    cout << endl;
}


Node *reverseInGroup(Node *head, int k){
    Node *curr = head, *next = NULL, *prev = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next != NULL){
        Node *rest_head = reverseInGroup(next, k);
        head -> next = rest_head;
    }

    return prev;
}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original Linked List :  ";
    printLinkedList(head);

    int k;
    cout << "Enter the Group Size :  "; 
    cin  >> k;
    head = reverseInGroup(head, k);

    cout << "Reversed Linked List :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(n/k), due to recursive call stack
