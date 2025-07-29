#include <bits/stdc++.h>
using namespace std;


struct Stack{
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
        return    arr[top];
    }

    bool isEmpty(){
        return    (top == -1);
    }
};

int main(){
    int n = 7;
    vector<int> input = {6, 2, 5, 4, 1, 5, 6};
    vector<int> ns(n);

    for (int i = 0; i < n; i++) {
        cout << input[i] << "  ";
    }
    cout << endl;

    Stack s1(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!s1.isEmpty() && input[s1.peek()] >= input[i]) {
            s1.pop();
        }

        if (s1.isEmpty()) {
            ns[i] = n;
        } else {
            ns[i] = s1.peek();
        }

        s1.push(i);
    }

    //printing the next smallest element
    for(int i = 0 ; i < n ; i++){
        cout << ns[i] << "  ";
    }

    
}