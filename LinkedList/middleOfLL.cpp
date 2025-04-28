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

void middleOfLinkedList(Node *head){
    Node *slow = head;
    Node *fast = head;

    if(head == NULL)
    {
        cout << "NULL"  << endl;
         return ;
    }

    if(head -> next == NULL){
        cout << head -> data << endl;
        return ;
    }

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    cout << slow -> data << endl;
    return ;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40);

    cout << "Original Linked List :  ";
    printLinkedList(head);

    cout << "Middle Node of the LinkedList : ";
    middleOfLinkedList(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)
