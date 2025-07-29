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

void prevSmallest(int n, int input[], vector<int> &ps){
    Stack s1(n);
    s1.push(input[0]);
    ps[0] = -1;
    for(int i = 1; i < n; i++)

    
}

void nextSmallest(){

}

int main(){
    int n = 7;
    int input[n] = {6, 2, 5, 4, 1, 5, 6};

    vector<int> ps(n);      //prev smallest
    vector<int> ns(n);      //next smallest

    prevSmallest( n, input, ps);

    

}