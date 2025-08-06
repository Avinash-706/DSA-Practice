#include <iostream>
using namespace std;


//OPTIMIZED APPROACH  --USING ONE EXTRA FRONT VARAIBLE 
//                    --AND CIRCULAR ARRAY
struct Queue {
    int cap, size, front;
    int *arr;

    Queue(int x) {
        this->cap = x;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

    bool isFull() {
        return size == cap;
    }

    bool isEmpty() {
        return  size == 0;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "OverFlow\n";
            return;
        }
        int rear = ((front + size)%cap);
        arr[rear] = x;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "UnderFlow\n";
            return;
        }
        front = ((front+1) % cap);
        size--;
    }

    int getFront() {
        if (isEmpty())  return -1;
        return          arr[front];
    }

    int getRear() {
        if (isEmpty())  return -1;
        return          arr[(front + size - 1)%cap];
    }

    int currSize() {
        return  size;

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

// TIME  COMPLEXITY  : O(1) for all operations (enqueue, dequeue, getFront, getRear)
// SPACE COMPLEXITY  : O(n), where 'n' is the queue capacity (cap)
