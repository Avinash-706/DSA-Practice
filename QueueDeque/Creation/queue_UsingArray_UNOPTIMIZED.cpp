#include <iostream>
using namespace std;


struct Queue {
    int cap, size;
    int *arr;

    Queue(int x) {
        this->cap = x;
        size = 0;
        arr = new int[cap];
    }

    bool isFull() {
        return  size == cap;
    }

    bool isEmpty() {
        return  size == 0;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "OverFlow\n";
            return;
        }
        arr[size++] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "UnderFlow\n";
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getFront() {
        if (isEmpty())  return -1;
        return          arr[0];
    }

    int getRear() {
        if (isEmpty())  return -1;
        return          arr[size - 1];
    }

    int currSize() {
        return size;
    }
};

int main() {
    Queue q(3);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);  

    cout << "Front: " << q.getFront() << ", Rear: " << q.getRear() << ", Size: " << q.currSize() << endl;

    q.dequeue();
    cout << "After one dequeue -> Front: " << q.getFront() << ", Rear: " << q.getRear() << ", Size: " << q.currSize() << endl;

    return 0;
}

// TIME  COMPLEXITY : O(n),      due to just ONE dequeue() call
// TIME  COMPLEXITY : O((n × k), where k is number of dequeues
// SPACE COMPLEXITY : O(n),      for dynamic array allocation of size `cap`s
