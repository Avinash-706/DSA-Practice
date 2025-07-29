#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int *arr;
    int cap, top;

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
        return arr[top];
    }
    
    bool isEmpty(){
        return    (top == -1);
    }
};


int main(){
    int n = 10;
    int input[n] = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
    Stack s(n);
    cout << "Span : 1" << " ";
    s.push(input[0]);
    for(int i = 1; i < n ; i++){
        while(s.isEmpty() == false && input[s.peek()] <= input[i]){
            s.pop();
        }
        int span = (s.isEmpty()) ? (i + 1) : i - s.peek();
        cout << span << " ";
        s.push(i); 
    }
}