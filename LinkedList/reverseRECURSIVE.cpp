#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//OPTIMIZED APPROACH : by changing the next pointers
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


Node *reverse(Node *curr, Node *prev){
    if(curr == NULL)    return prev;
    Node *next = curr -> next;
    curr -> next = prev;
    return reverse(next, curr );
}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original Linked List :  ";
    printLinkedList(head);

    head = reverse(head, NULL);
    cout << "Reversed Linked List :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the Linked List  
// SPACE COMPLEXITY  : O(n), due to recursion stack