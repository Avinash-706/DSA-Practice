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
    int input[n] = {5, 15, 10, 8, 6, 12, 9, 18};
    cout << "Input Array   : ";
    for(int i = 0 ; i < n ; i++){
        cout << input[i] << "  ";
    }
    cout << endl;

    
    Stack s(n);
    int temp[n];
    s.push(input[n-1]);
    temp[n-1] = -1;

    for(int i = n-2 ; i >= 0 ; i--){
        while(!s.isEmpty() && s.peek() < input[i]){
            s.pop();
        }
        if(s.isEmpty()){
            temp[i] = -1;
        } else {
            temp[i] = s.peek();
        }
        s.push(input[i]);
    }

    //print final array
    cout << "Next Greater  : ";
    for(int i = 0 ; i < n ; i++){
        cout << temp[i] << "  ";
    }
}

// TIME  COMPLEXITY  : O(n), where n is the number of elements in the array
// SPACE COMPLEXITY  : O(n), for the stack and the temp[] output array
