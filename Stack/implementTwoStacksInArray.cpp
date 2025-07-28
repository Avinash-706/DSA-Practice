#include <iostream>
using namespace std;

// Space Efficient Implementation 
struct Stack {
    int top1, top2;
    int cap;
    int *arr;

    Stack(int x) {
        cap = x;
        arr = new int[x];
        top1 = -1;
        top2 = cap;
    }

    ~Stack() {
        delete[] arr;
    }

    bool push1(int x) {
        if (top1 + 1 == top2) {
            cout << "OverFlow (Stack 1): ";
            return false;
        }
        arr[++top1] = x;
        return true;
    }

    bool push2(int x) {
        if (top1 + 1 == top2) {
            cout << "OverFlow (Stack 2): ";
            return false;
        }
        arr[--top2] = x;
        return true;
    }

    int pop1() {
        if (top1 == -1) {
            cout << "UnderFlow (Stack 1): ";
            return -1;
        }
        return arr[top1--];
    }

    int pop2() {
        if (top2 == cap) {
            cout << "UnderFlow (Stack 2): ";
            return -1;
        }
        return arr[top2++];
    }

    int size1() {
        return top1 + 1;
    }

    int size2() {
        return cap - top2;
    }

    int peek1() {
        if (top1 == -1) return -1;
        return arr[top1];
    }

    int peek2() {
        if (top2 == cap) return -1;
        return arr[top2];
    }
};

int main() {
    Stack s(5); 

    cout << " PUSH 1 : " << (s.push1(1) ? "Yes" : "No") << endl;
    cout << " PUSH 1 : " << (s.push1(2) ? "Yes" : "No") << endl;
    cout << " PUSH 1 : " << (s.push1(3) ? "Yes" : "No") << endl;

    cout << " PUSH 2 : " << (s.push2(10) ? "Yes" : "No") << endl;
    cout << " PUSH 2 : " << (s.push2(20) ? "Yes" : "No") << endl;
    cout << " PUSH 2 : " << (s.push2(30) ? "Yes" : "No") << endl; 

    cout << " POP 1 : " << s.pop1() << endl;
    cout << " POP 2 : " << s.pop2() << endl;

    cout << " SIZE 1 : " << s.size1() << endl;
    cout << " SIZE 2 : " << s.size2() << endl;

    cout << " TOP 1 : " << s.peek1() << endl;
    cout << " TOP 2 : " << s.peek2() << endl;
}

