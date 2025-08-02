#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    stack<int> ms; // main stack
    stack<int> as; // auxilary stack

    void push(int x){
        if (ms.empty()){
            ms.push(x);
            as.push(x);
            return;
        }
        ms.push(x);
        if (as.top() >= ms.top())   as.push(x);
    }

    void pop(){
        if (as.top() == ms.top())   as.pop();
        ms.pop();
    }

    int top(){
        return    ms.top();
    }

    int getMin(){
        return    as.top();
    }
};


int main(){
    MyStack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);

    cout << " Minimum Element from Stack: " << s.getMin() << endl;
    s.pop();
    cout << " Minimum Element from Stack: " << s.getMin() << endl;

    return 0;
}
//TIME  COMPLEXITY : O(1)
//SPACE COMPLEXITY : O(n), where n is the size of the stack in worst case