#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// WE CAN ALSO USE VECTOR IMPLEMENTATION FOR DYNAMICALLY SIZED ARRAY
struct Stack
{
    int *arr;
    int cap;
    int top;

    Stack(int c){
        cap = c;
        arr = new int[c];
        top = -1;
    }

    void push(int x){
        if(top == cap - 1){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek(){
        if(top == -1){
            cout << "Stack is Empty\n";
            return -1; // or throw exception
        }
        return arr[top];
    }

    int size(){
        return (top+1);
    }

    bool isEmpty(){
        return (top == -1);
    }

    ~Stack(){
        delete[] arr;   // avoid memory leak
    }
};

int main() {
    Stack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);  

    cout << "Top: " << s.peek() << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;  

    return 0;
}