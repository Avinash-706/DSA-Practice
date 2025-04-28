#include <iostream>
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

Node* sortedInsert(Node *head, int num){
    Node *temp = new Node(num);
    if (head == NULL || num < head->data) {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    while(curr->next != NULL && curr->next->data < num){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    
    return head;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40); 

    cout << "Original Linked List :  ";
    printLinkedList(head);

    head = sortedInsert(head, 5);  
    head = sortedInsert(head, 25);  
    head = sortedInsert(head, 45);  

    cout << "After Insertions     :  ";
    printLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)
