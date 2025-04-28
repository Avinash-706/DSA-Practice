#include <iostream>
using namespace std;

//OPTIMIZED APPROACH
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


void nthNodeFromEnd(Node *head, int n){
    if(head == NULL){
        cout << "Linked List is empty." << endl;
        return;
    }
    
    if(n <= 0){
        cout << "Invalid position (n must be >= 1)." << endl;
        return;
    }

    Node *fast = head;
    Node *slow = head;

    // Move 'fast' n steps ahead
    for(int i = 0; i < n; i++){
        if(fast == NULL){
            cout << "Position is greater than the length of the list." << endl;
            return;
        }
        fast = fast->next;
    }

    // Move both fast and slow until fast reaches the end
    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    cout << slow->data << endl;
}


int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original Linked List :  ";
    printLinkedList(head);

    int n;
    cout << endl << "Enter the Nth Node From End : ";
    cin >> n;
    cout << endl << n << "th Node from End    :  ";
    nthNodeFromEnd(head, n);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList
// SPACE COMPLEXITY  : O(1)
