#include <iostream>
using namespace std;

// Space Efficient Implementation 
// *arr   ->  Stores actual stack elements
// *next  ->  For each index, stores the next entry in the same stack or the next free slot
// *top   ->  top[i] is the index of the top element in the i-th stack

struct Stack {
    int *arr;
    int *next;
    int *top;

    int k;
    int cap;
    int freeTop;

    Stack(int size, int partitions) {
        cap = size;
        k = partitions;

        arr = new int[cap];
        next = new int[cap];
        top = new int[k];

        for(int i = 0 ; i < k ; i++)
            top[i] = -1;

        for(int i = 0 ; i < cap ; i++)
            next[i] = i+1;
        next[cap-1] = -1;

        freeTop = 0;
    }

    ~Stack() {
        delete[] arr;
        delete[] next;
        delete[] top;
    }

    void push(int x, int n) {
        if (freeTop == -1) {
            cout << "Stack Overflow\n";
            return;
        }

        int i = freeTop;
        freeTop = next[i];
        next[i] = top[n];
        top[n] = i;
        arr[i] = x;
    }

    int pop(int n){
        if (top[n] == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }

        int i = top[n];
        top[n] = next[i];
        next[i] = freeTop;
        freeTop = i;
        return arr[i];
    }

    int peek(int n) {
        if (top[n] == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top[n]];
    }
};

int main() {
    Stack s(6, 3); 

    s.push(100, 0); 
    s.push(200, 0); 
    s.push(300, 0); 
    s.push(400, 1);

    cout << "Peek stack 0 : " << s.peek(0) << endl;

    cout << " POP : " << s.pop(0) << endl;

    s.push(500, 1);

    for(int i = 0 ; i < 6 ; i++){
        cout << s.next[i] << " ";
    }
    cout << endl;

    cout << "Peek stack 1 : " << s.peek(1) << endl;

    cout << " POP : " << s.pop(0) << endl;
}
