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

void printLL(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
}


bool deleteNodeWithNoHeadInfo(Node *given){
    Node *temp = given -> next;
    given -> data = temp -> data;
    given -> next = temp -> next;
    delete temp;

}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 

    Node *given = new Node(30);
    head->next->next = given;   

    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    
    cout << "Linked List BEFORE Deletion of Given Node : "; 
    printLL(head);
    deleteNodeWithNoHeadInfo(given);
    cout << "\nLinked List AFTER  Deletion of Given Node : "; 
    printLL(head);

    return 0;
}

// TIME  COMPLEXITY  : O(1)
// SPACE COMPLEXITY  : O(1)
