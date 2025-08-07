#include <iostream>
using namespace std;

//OPTIMIZED APPROACH -- Doubly LinkedList
struct Node
{
    int data;
    Node *next, *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
    }
};

struct Deque {
    int size;
    Node *front, *rear;

    Deque() {
        size = 0;
        front = rear = NULL;
    }

    bool isEmpty() {
        return size == 0;
    }

    void insertFront(int x) {
        Node * temp = new Node(x);
        if((front == NULL && rear == NULL ) && isEmpty()){
            front = rear = temp;
            size++;
            return;
        }
        temp -> next = front;
        front -> prev = temp;
        front = temp;      
        size++;  
    }

    void insertRear(int x) {
        Node * temp = new Node(x);
        if((front == NULL && rear == NULL ) && isEmpty()){
            front = rear = temp;
            return;
            size++;
        }
        temp -> prev = rear;
        rear -> next = temp;
        rear = temp;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "UnderFlow" << endl;
            return;
        }
        Node *temp = front;
        front = front -> next;
        if (front != NULL)  front->prev = NULL;
        else                rear = NULL;
        size--;
        delete temp;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "UnderFlow" << endl;
            return;
        }
        Node *temp = rear;
        rear = rear -> prev;
        if(rear != NULL)    rear -> next = NULL;
        else                front = NULL;
        size--;
        delete temp;
    }

    int getFront() {
        if (isEmpty())  return -1;
        return  front -> data;
    }

    int getRear() {
        if (isEmpty())  return -1;
        return  rear -> data;
    }

    int getSize() {
        return  size;
    }

};


int main() {
    Deque dq;

    cout << "Initial State:" << endl;
    cout << "Is Empty? " << (dq.isEmpty() ? "Yes" : "No") << endl;
    cout << "Size     : " << dq.getSize() << "\n" << endl;

    cout << "Inserting 10 at Front" << endl;
    dq.insertFront(10);

    cout << "Inserting 20 at Front" << endl;
    dq.insertFront(20);

    cout << "Inserting 30 at Rear" << endl;
    dq.insertRear(30);

    cout << "Inserting 40 at Rear" << endl;
    dq.insertRear(40);

    cout << "\nAfter Insertions:" << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << endl;

    cout << "Deleting from Front" << endl;
    dq.deleteFront();

    cout << "\nAfter Deleting Front:" << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << "\n" << endl;

    cout << "Deleting from Rear" << endl;
    dq.deleteRear();

    cout << "\nAfter Deleting Rear:" << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << "\n" << endl;

    cout << "Deleting All to Check Underflow:" << endl;
    dq.deleteFront();
    dq.deleteFront();
    dq.deleteFront();
    dq.deleteRear();

    cout << "\nAfter All Deletions:" << endl;
    cout << "Is Empty?     : " << (dq.isEmpty() ? "Yes" : "No") << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << endl;

    return 0;
}

// TIME  COMPLEXITY  : All Operation O(1)
// SPACE COMPLEXITY  : O(n) for n nodes in doubly linked list