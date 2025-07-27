#include <iostream>
using namespace std;


// OPTIMIZED VERSION -- in-place reversal and comparison
struct Node {
    char data;
    Node* next;
    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printLinkedList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << "  ";
        curr = curr->next;
    }
    cout << endl;
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) return true;

    Node *slow = head, *fast = head;
    // middle
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverse(slow->next);

    // Compare both halves
    Node* firstHalf = head;
    Node* temp = secondHalf;
    while (temp != NULL) {
        if (firstHalf->data != temp->data) return false;
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}

int main() {
    Node* head1 = new Node('A');
    head1->next = new Node('B');
    head1->next->next = new Node('C');
    head1->next->next->next = new Node('B');
    head1->next->next->next->next = new Node('A');

    cout << " --- Original Linked List --- ";
    cout << "\nLinked List 1 : ";
    printLinkedList(head1);

    cout << "\nPalindrome : " << (checkPalindrome(head1) ? "Yes" : "No");

    return 0;
}

// TIME  COMPLEXITY  : O(n), where n is the number of nodes
// SPACE COMPLEXITY  : O(1), in-place reversal and comparison
