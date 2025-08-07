#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//ITERATIVE APPROACH  --USING STACK FOR REVERSING
queue<int> printQueue(queue<int> &q){
    queue<int> temp = q;
    cout << "Queue : ";
    while(!q.empty()){
        cout << q.front() << "  ";
        q.pop();
    }
    cout << endl;
    return temp;
}

void reverse(queue<int> &q){
    stack<int> s;
    while (!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    } 
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "\nBEFORE REVERSE : " << endl;
    q = printQueue(q);
    reverse(q);
    cout << "\nAFTER  REVERSE : " << endl;
    q = printQueue(q);
}

// TIME  COMPLEXITY  : O(n), where 'n' is the number of elements in the queue
// SPACE COMPLEXITY  : O(n), due to stack used for reversing