#include <bits/stdc++.h>
using namespace std;


// OPTIMIZED BUT RESTRICTION
// RESTRICTION -- FOR POSITIVE ONLY
struct Stack {
    int top, cap, min;
    int* arr;

    Stack(int x) {
        min = INT_MIN;
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
        else if (x <= min) {
            arr[++top] = x - min; 
            min = x;
        }
        else {
            arr[++top] = x;
        }
    }

    int pop() {
        if (isEmpty()) return -1;

        int val = arr[top--];

        if (val <= 0) {
            int res = min;
            min = min - val;
            return res;
        }
        
        return val;
    }

    int peek() {
        if (isEmpty()) return -1;

        int val = arr[top];
        return (val >= 0) ? val : min;  
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

    s.push(5);   
    cout << "Pushed 5, Current Min: " << s.getMin() << endl;  // Min = 5

    s.push(10);  
    cout << "Pushed 10, Current Min: " << s.getMin() << endl; // Min = 5

    s.push(20);  
    cout << "Pushed 20, Current Min: " << s.getMin() << endl; // Min = 5

    s.push(2);   
    // Since 2 < current min (5), encoded as -3, min updated to 2
    cout << "Pushed 2 (new min), Current Min: " << s.getMin() << endl;  // Min = 2

    s.push(6);   
    cout << "Pushed 6, Current Min: " << s.getMin() << endl;  // Min = 2

    s.push(4);   
    cout << "Pushed 4, Current Min: " << s.getMin() << endl;  // Min = 2

    cout << "Pop: " << s.pop() << ", Current Min: " << s.getMin() << endl; // Popped 4, Min = 2
    cout << "Pop: " << s.pop() << ", Current Min: " << s.getMin() << endl; // Popped 6, Min = 2

    s.push(2);  
    // 2 == current min, still pushed using encoding (x - min = 0)
    cout << "Pushed 2 (same as current min), Current Min: " << s.getMin() << endl; // Min = 2

    cout << "Pop: " << s.pop() << ", Current Min: " << s.getMin() << endl; // Popped 2, Min = 2

    s.push(1);  
    // Since 1 < current min (2), encoded as -1, min updated to 1
    cout << "Pushed 1 (new min), Current Min: " << s.getMin() << endl; // Min = 1

    cout << "Pop: " << s.pop() << ", Current Min: " << s.getMin() << endl; // Popped 1, Min = 2 (restored)

    cout << "Pop: " << s.pop() << ", Current Min: " << s.getMin() << endl; // Popped encoded -3 → original 2, Min = 5 (restored)

    return 0;
}


// TIME  COMPLEXITY : O(1)
// SPACE COMPLEXITY : O(1)