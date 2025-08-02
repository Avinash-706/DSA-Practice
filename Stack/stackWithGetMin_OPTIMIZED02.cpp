#include <bits/stdc++.h>
using namespace std;


// FULLY OPTIMIZED -- Works for both positive & negative integers
struct Stack {

    int top, cap, min;
    int* arr;

    Stack(int x) {
        min = 0;
        cap = x;
        top = -1;
        arr = new int[cap];
    }

    void push(int x) {
        if (top >= cap - 1) return;

        if (isEmpty()) {
            min = x;
            arr[++top] = x;
        }
        else if (x < min) {
            arr[++top] = 2 * x - min;
            min = x;
        }
        else {
            arr[++top] = x;
        }
    }

    int pop() {
        if (isEmpty()) return -1;

        int val = arr[top--];

        if (val < min) {
            int originalMin = min;
            min = 2 * min - val;
            return originalMin;
        }

        return val;
    }

    int peek() {
        if (isEmpty()) return -1;

        int val = arr[top];
        return (val >= min) ? val : min;
    }

    int getMin() {
        return isEmpty() ? -1 : min;
    }

    bool isEmpty() {
        return top == -1;
    }
};


int main() {
    Stack s(10);

    s.push(5);     cout << "Min: " << s.getMin() << endl;
    s.push(-3);    cout << "Min: " << s.getMin() << endl;
    s.push(7);     cout << "Min: " << s.getMin() << endl;
    s.push(-10);   cout << "Min: " << s.getMin() << endl;  

    int val = s.pop(); 
    cout << "Pop: " << val << ", Min: " << s.getMin() << endl; // Pop -10, Min -3

    val = s.pop();     
    cout << "Pop: " << val << ", Min: " << s.getMin() << endl; // Pop 7, Min -3

    val = s.pop();     
    cout << "Pop: " << val << ", Min: " << s.getMin() << endl; // Pop -3, Min 5

    val = s.pop();     
    cout << "Pop: " << val << ", Min: " << s.getMin() << endl; // Pop 5, Min -1
}



// TIME  COMPLEXITY : O(1)
// SPACE COMPLEXITY : O(1)