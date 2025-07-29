#include <bits/stdc++.h>
using namespace std;

struct Stack{
    int *arr;
    int top, cap;

    Stack(int x){
        cap = x;
        top = -1;
        arr = new int[cap];
    }

    void push(int x){
        arr[++top] = x; 
    }

    void pop(){
        arr[top--];
    }

    int peek(){
        return    arr[top];
    }
    
    bool isEmpty(){
        return    (top == -1);
    }
};

int main(){
    int n = 8;
    int input[n] = {15, 10, 18, 12, 4, 6, 2, 8};
    cout << "Input Array      : ";
    for(int i = 0 ; i < n ; i++){
        cout << input[i] << "  ";
    }
    cout << endl;

    
    Stack s(n);
    cout << "Previous Greater : ";
    s.push(input[0]);
    cout << "-1  ";

    for(int i = 1 ; i < n ; i++){
        while(!s.isEmpty() && s.peek() < input[i]){
            s.pop();
        }
        if(s.isEmpty()){
            cout << "-1  ";
        } else {
            cout << s.peek() << "  ";
        }
        s.push(input[i]);
    }
}

// TIME COMPLEXITY  : O(n), where n is the number of the elements
// SPACE COMPLEXITY : O(n), where n is the number of the elements