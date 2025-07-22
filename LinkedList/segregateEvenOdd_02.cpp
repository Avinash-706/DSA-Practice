#include <iostream>
using namespace std;


//ORDER MAINTAINED BUT NEED TWO TRAVERSAL AND NOT OPTIMIZED
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

    Node* end = head;
    while (end->next) {
        end = end->next;
    }

    Node* newEnd = end;
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != end) {
        if (curr->data % 2 != 0) {
            Node* temp = curr->next;

            if (prev) {
                prev->next = curr->next;
            } else {
                head = curr->next;
            }

            curr->next = nullptr;
            newEnd->next = curr;
            newEnd = curr;

            curr = temp;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    // Handle the last node (end)
    if (end->data % 2 != 0 && newEnd != end) {
        if (prev) prev->next = end->next;
        else head = end->next;

        end->next = nullptr;
        newEnd->next = end;
    }

    return head;
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
