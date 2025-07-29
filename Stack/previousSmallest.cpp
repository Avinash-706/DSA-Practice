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
    vector<int> ps(n);
    for(int i = 0 ; i < n ; i++){
        cout << input[i] << "  ";   
    }
    cout << endl;


    Stack s1(n);
    s1.push(0);
    ps[0] = -1;
    
    for(int i = 1; i < n; i++){
        while(!s1.isEmpty() && input[s1.peek()] >= input[i]){
            s1.pop();
        }
        if(s1.isEmpty()){
            ps[i] = -1;
        }
        else{
            ps[i] = s1.peek();
        }
        s1.push(i);
    }

    //printing the previous smallest element
    for(int i = 0 ; i < n ; i++){
        cout << ps[i] << "  ";
    }

    
}