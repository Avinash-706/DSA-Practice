#include <iostream>
using namespace std;

// LOOP DETECTION AND REMOVAL USING FLOYD’S CYCLE DETECTION
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

bool detectLoopAndREMOVAL(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    // No loop found
    if(slow != fast) return false;

    // Find the start of the loop
    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = NULL;
    return true;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20); 
    head->next->next = new Node(30); 
    Node *temp = head->next->next;

    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = temp; // Creating Loop

    bool isLoop = detectLoopAndREMOVAL(head);
    cout << "Loop Detected : " << (isLoop ? "Yes" : "No") << endl;

    // Print after loop removal
    if(isLoop){
        cout << "List after loop removal: ";
        Node* curr = head;
        while(curr != NULL){
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList  
// SPACE COMPLEXITY : O(1)
