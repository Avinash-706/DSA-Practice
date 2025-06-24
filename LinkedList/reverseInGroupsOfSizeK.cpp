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


Node *reverse(Node *head, int k){
    Node *prev = NULL;
    Node *curr = head;
    int count = 0;
    Node *first = NULL;
    while(curr != NULL){
        if(count != k){
            if(count == 0)  first = curr;
            Node *next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        else{
            
            cout << curr -> data << endl;
            break;
        }
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
    head = reverse(head, k);

    cout << "Reversed Linked List :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)
