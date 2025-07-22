#include <iostream>
using namespace std;


//ORDER OF LINKEDLIST NOT MAINTAINED
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printLL(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << "  ";
        curr = curr->next;
    }
}

Node* segregateEvenNode(Node *head) {
    if (!head || !head->next)
        return head;

    Node *evenPtr = head;
    Node *curr = head;

    while (curr != NULL) {
        if (curr->data % 2 == 0) {
            swap(curr->data, evenPtr->data);
            evenPtr = evenPtr->next;
        }
        curr = curr->next;
    }

    return head;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2); 
    head->next->next = new Node(3);   
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Linked List BEFORE SEGREGATION of Even and Odd : "; 
    printLL(head);

    head = segregateEvenNode(head);

    cout << "\nLinked List AFTER SEGREGATION of Even and Odd : "; 
    printLL(head);

    return 0;
}

// TIME  COMPLEXITY  : O(n)
// SPACE COMPLEXITY : O(1)
