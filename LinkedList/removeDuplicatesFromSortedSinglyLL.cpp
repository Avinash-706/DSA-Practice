#include <iostream>
#include <bits/stdc++.h>
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
        cout << curr->data << "  ";
        curr = curr->next;
    }
    cout << endl;
}


Node *removeDuplicates(Node *head){
    Node *curr = head;
    if(curr == NULL || curr -> next == NULL){
        return head;
    }
    

}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(20); 
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(40);

    cout << "Original Linked List :  ";
    printLinkedList(head);

    head = removeDuplicates(head);
    cout << "Reversed Linked List :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)