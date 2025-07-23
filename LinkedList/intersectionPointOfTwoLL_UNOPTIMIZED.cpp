#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//UNOPTIMIZED APPROACH - METHOD USING UNORDERED_SET
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
    unordered_set<Node *> v;
    for(Node *curr = h1; curr != NULL ; curr = curr -> next){
        v.insert(curr);
    }
    for(Node *curr = h2; curr != NULL ; curr = curr -> next){
        if(v.find(curr) != v.end()){
            return curr->data;
        }
    }
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
// SPACE COMPLEXITY  : O(m), where 'm' is the number of node in LinkedList1
