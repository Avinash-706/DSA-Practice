#include <iostream>
#include <unordered_set>
using namespace std;

//LOOP REMOVAL - UNOPTIMIZED USING HASHING
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

bool detectLoopAndREMOVAL(Node *head){
    unordered_set<Node*> visitedNodes;
    bool loop = false;
    Node *curr = head;

    while(curr->next != NULL){
        if(visitedNodes.find(curr->next) != visitedNodes.end()){
            cout << "\nLoop detected at node with value: " << curr->next->data << endl;
            loop = true;
            break;
        }
        visitedNodes.insert(curr->next);
        curr = curr->next;
    }

    // Loop removal
    if(loop){
        curr->next = NULL;
    }

    return loop;
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
    }

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of nodes in the LinkedList  
// SPACE COMPLEXITY : O(n) — due to unordered_set used for visited nodes
