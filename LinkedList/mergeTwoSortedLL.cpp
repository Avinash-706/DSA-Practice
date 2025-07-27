#include <iostream>
using namespace std;


//IN-PLACE MERGE | NO EXTRA SPACE REQUIRED
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

Node* mergeLL(Node *head1, Node *head2){
    // head1 always starts with the smaller value
    if(head2->data < head1->data){
        swap(head1, head2);
    }

    Node *curr1 = head1;
    Node *curr2 = head2;

    while(curr1 != NULL && curr2 != NULL){
        while(curr1->next != NULL && curr1->next->data < curr2->data){
            curr1 = curr1->next;
        }

        Node* temp1 = curr1->next;
        Node* temp2 = curr2->next;

        curr1->next = curr2;
        curr2->next = temp1;

        curr1 = curr2;
        curr2 = temp2;
    }

    return head1;
}



int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(20); 
    head1->next->next = new Node(30); 
    head1->next->next->next = new Node(40);
    head1->next->next->next->next = new Node(50);

    Node *head2 = new Node(1);
    head2->next = new Node(2); 
    head2->next->next = new Node(35);
    head2->next->next->next = new Node(45);


    cout << " --- Original Linked List --- ";
    cout << "\nLinked List 1 : ";
    printLinkedList(head1);
    cout << "Linked List 2 : ";
    printLinkedList(head2);

    cout<< "\nMerged Linked List : ";
    head1 = mergeLL(head1, head2);
    printLinkedList(head1);
    

    return 0;
}

// TIME  COMPLEXITY  : O(m + n), where m and n are lengths of both linked lists
// SPACE COMPLEXITY  : O(1), in-place merge
