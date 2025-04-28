#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node *head) {
    if (head == NULL) {
        cout << "NULL" << endl;
        return;
    }

    cout << head->data << "  ";
    for (Node *p = head->next; p != head; p = p->next) {
        cout << p->data << "  ";
    }
    cout << endl;
}

Node *deleteHead(Node *head){
    if(head == NULL || head -> next == head){
        return NULL;
    }
    else{
        head->data = head->next->data;
        Node* temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}

Node *deleteKthNode(Node *head, int k) {
    if (head == NULL || head->next == head) {
        return NULL;
    }

    if (k == 1) {
        return deleteHead(head);
    } 
    else {
        Node *curr = head;
        for (int i = 1; i < k - 1; i++) {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    head->next->next->next = new Node(40); 
    head->next->next->next->next = head; 

    cout << "Before Deletion: ";
    printLinkedList(head);

    head = deleteKthNode(head, 3);
    
    cout << "After  Deletion: ";
    printLinkedList(head);
    return 0;
}

// TIME  COMPLEXITY : O(k), where 'k' is the position of the node to be deleted
// SPACE COMPLEXITY : O(1)
