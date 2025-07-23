#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;


// PAIR-WISE SWAP BY DATA SWAPPING BETWEEN TWO NODES
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
        cout << curr->data;
        if(curr->next != NULL) cout << " -> ";
        curr = curr->next;
    }
    cout << endl;
}


Node* pairWiseSwap(Node *head){
    Node *curr = head;
    while(curr != NULL && curr->next != NULL){
        swap(curr->data, curr->next->data);
        curr = curr->next->next;
    }
    return head;
}


int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(20); 
    head1->next->next = new Node(30); 
    head1->next->next->next = new Node(40);
    head1->next->next->next->next = new Node(50);

    cout << " Original Linked List : ";
    printLinkedList(head1);

    head1 = pairWiseSwap(head1);
    cout << " Modified Linked List : ";
    printLinkedList(head1);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the Linked List
// SPACE COMPLEXITY  : O(1)
