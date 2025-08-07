#include <iostream>
using namespace std;

//UNOPTIMIZED APPROACH 
struct Deque {
    int size, cap;
    int *arr;

    Deque(int x) {
        cap = x;
        size = 0;
        arr = new int[cap];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }

    void insertFront(int x) {
        if (isFull()) {
            cout << "OverFlow" << endl;
            return;
        }
        for (int i = size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }

    void insertRear(int x) {
        if (isFull()) {
            cout << "OverFlow" << endl;
            return;
        }
        arr[size++] = x;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "UnderFlow" << endl;
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "UnderFlow" << endl;
            return;
        }
        size--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[0];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[size - 1];
    }

    int getSize() {
        return size;
    }

};


int main() {
    Deque dq(4);

    cout << "Initial State:" << endl;
    cout << "Is Empty? " << (dq.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? "  << (dq.isFull()  ? "Yes" : "No") << endl;
    cout << "Size     : " << dq.getSize() << "\n" << endl;

    cout << "Inserting 10 at Front" << endl;
    dq.insertFront(10);

    cout << "Inserting 20 at Front" << endl;
    dq.insertFront(20);

    cout << "Inserting 30 at Rear" << endl;
    dq.insertRear(30);

    cout << "Inserting 40 at Rear" << endl;
    dq.insertRear(40);

    cout << "Trying to insert 50 at Front" << endl;
    dq.insertFront(50);  // OVERFLOW

    cout << "\nAfter Insertions:" << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << endl;
    cout << "Is Full?      : " << (dq.isFull() ? "Yes" : "No") << "\n" << endl;

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
    dq.deleteFront(); // UNDERFLOW

    cout << "\nAfter All Deletions:" << endl;
    cout << "Is Empty?     : " << (dq.isEmpty() ? "Yes" : "No") << endl;
    cout << "Front Element : " << dq.getFront() << endl;
    cout << "Rear Element  : " << dq.getRear()  << endl;
    cout << "Current Size  : " << dq.getSize()  << endl;

    return 0;
}


// TIME  COMPLEXITY  :
// insertFront(x)    -> O(n)    //costly operation
// insertRear(x)     -> O(1)
// deleteFront()     -> O(n)    //costly operation
// deleteRear()      -> O(1)
// getFront()        -> O(1)
// getRear()         -> O(1)
// getSize()         -> O(1)
// isFull()          -> O(1)
// isEmpty()         -> O(1)

// SPACE COMPLEXITY  :  O(cap), for storing the array of capacity 'cap'
