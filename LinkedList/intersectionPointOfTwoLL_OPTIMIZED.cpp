#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//OPTIMIZED APPROACH - USING NODE COUNT METHOD
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


int intersectionPoint(Node *h1, Node *h2){
    int count1 = 0, count2 = 0;
    Node *curr1 = h1, *curr2 = h2;

    while(curr1 != NULL){
        count1++;
        curr1 = curr1->next;
    }

    while(curr2 != NULL){
        count2++;
        curr2 = curr2->next;
    }

    curr1 = h1;
    curr2 = h2;

    int diff = abs(count1 - count2);
    if(count1 > count2){
        for(int i = 0; i < diff; i++)
            curr1 = curr1->next;
    } else {
        for(int i = 0; i < diff; i++)
            curr2 = curr2->next;
    }

    while(curr1 != NULL && curr2 != NULL){
        if(curr1 == curr2)  
            return curr1->data;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    return -1; 
}


int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(20); 
    head1->next->next = new Node(30); 
    head1->next->next->next = new Node(40);
    head1->next->next->next->next = new Node(50);

    Node *head2 = new Node(1);
    head2->next = new Node(2); 
    head2->next->next = new Node(3);
    head2->next->next->next = new Node(4);
    head2->next->next->next->next = head1->next->next; 
    head2->next->next->next->next->next = head1->next->next->next;
    head2->next->next->next->next->next->next = head1->next->next->next->next;

    cout << " --- Original Linked List --- ";
    cout << "\nLinked List 1 : ";
    printLinkedList(head1);
    cout << "Linked List 2 : ";
    printLinkedList(head2);

    cout<< "\nIntersection Point Between Two LinkedList : " << intersectionPoint(head1, head2);

    return 0;
}

// TIME  COMPLEXITY  : O(m + n), where 'm' & 'n' is the number of nodes in the LinkedList1 and LinkedList2 respectively
// SPACE COMPLEXITY  : O(1)