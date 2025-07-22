#include <iostream>
using namespace std;


//ORDER MAINTAINED , ONE TRAVERSAL AND, OPTIMIZED
struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* segregateEvenOdd(Node* head) {
    if (!head || !head->next) return head;

    Node* evenStart = nullptr;
    Node* evenEnd = nullptr;
    Node* oddStart = nullptr;
    Node* oddEnd = nullptr;

    Node* curr = head;

    while (curr != nullptr) {
        int val = curr->data;

        if (val % 2 == 0) {
            if (!evenStart) {
                evenStart = curr;
                evenEnd = evenStart;
            } else {
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        } else {
            if (!oddStart) {
                oddStart = curr;
                oddEnd = oddStart;
            } else {
                oddEnd->next = curr;
                oddEnd = oddEnd->next;
            }
        }

        curr = curr->next;
    }

    // If there are no even or no odd nodes
    if (!evenStart || !oddStart) return head;

    // Combine even and odd lists
    evenEnd->next = oddStart;
    oddEnd->next = nullptr;

    return evenStart;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(17);
    head->next = new Node(15);
    head->next->next = new Node(8);
    head->next->next->next = new Node(12);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    head = segregateEvenOdd(head); 

    cout << "Modified List: ";
    printList(head);

    return 0;
}
