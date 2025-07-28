#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Linked List Implementation
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Stack {
    Node *head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push(int x) {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop() {
        if (head == NULL){
            cout << " UnderFlow : ";
            return INT_MAX;
        }
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        size--;
        return res;
    }

    int getSize() {  
        return size;
    }

    bool isEmpty() {
        return (head == NULL);
    }

    int peek() {
        if (head == NULL)    return INT_MAX;
        return head->data;
    }
};

int main() {
    Stack s; 

    s.push(10);
    s.push(20);
    s.push(30);

    cout << " SIZE: " << s.getSize() << endl;
    cout << " EMPTY : " << (s.isEmpty() ? "Yes" : "No") << endl;


    cout << " POP : " <<  s.pop() << endl;
    cout << " POP : " <<  s.pop() << endl;

    cout << " TOP : " <<  s.peek() << endl;

    cout << " POP : " <<  s.pop() << endl;
    cout << " POP : " <<  s.pop() << endl;
    cout << " EMPTY : " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
