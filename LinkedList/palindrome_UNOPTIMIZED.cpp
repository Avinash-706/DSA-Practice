#include <iostream>
using namespace std;

// UNOPTIMIZED VERSION
struct Node{
    char data;
    Node *next;
    Node(char x){
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

bool checkPalindrome(Node *head){
    if(head == NULL || head->next == NULL) return false;  

    int count = 0;
    for(Node *curr = head; curr != NULL; curr = curr->next){
        count++;
    }

    char arr[count];

    Node *curr = head;
    for(int i = 0; i < count / 2; i++){
        arr[i] = curr->data;
        curr = curr->next;
    }

    if(count % 2 != 0) curr = curr->next;  // skip middle element if odd

    for(int i = count/2 - 1; i >= 0; i--){
        if(arr[i] != curr->data) return false;
        curr = curr->next;
    }

    return true;
}

int main() {
    Node *head1 = new Node('A');
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
// SPACE COMPLEXITY : O(n), due to array used to store first half
