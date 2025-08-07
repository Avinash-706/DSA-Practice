#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Queue{
    int size;
    Node *front, *rear;
    
    Queue(){
        size = 0;
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x){
        Node *newNode = new Node(x);
        if(front == NULL){
            front = rear = newNode;
            size++;
            return ;
        }
        rear -> next = newNode;
        rear = newNode;
        size++;
    }

    void dequeue(){
        if(front == NULL){
            cout << "UNDERFLOW" << endl;
            return;
        }
        Node *temp = front;
        front = front -> next;
        if(front == NULL)   rear = NULL;
        size--;
        delete temp;
    }

    int getRear(){
        if(rear != NULL)    return  rear -> data;
        cout << "Queue is empty\n";
        return -1;
    }
    int getFront(){
        if(front != NULL)   return  front -> data;
        cout << "Queue is empty\n";
        return -1;
    }

    int getSize(){
        return size;
    }


};

int main() {
    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);  

    cout << "\nFront: " << q.getFront() << ", Rear: " << q.getRear() << ", Size: " << q.getSize() << endl;

    q.dequeue();
    cout << "After one dequeue -> Front: " << q.getFront() << ", Rear: " << q.getRear() << ", Size: " << q.getSize() << endl << endl;
    return 0;
}

// TIME  COMPLEXITY  :  O(1)
// enqueue(x)        -> O(1)
// dequeue()         -> O(1)
// getFront()        -> O(1)
// getRear()         -> O(1)
// getSize()         -> O(1)

// SPACE COMPLEXITY  :  O(n), where 'n' is the number of elements in the queue
// (Each element requires space for a Node: data + pointer)
