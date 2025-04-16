#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};


void printList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
    cout << endl;
}


Node *insertAtPoint(int pos, int number, Node *head){
    Node *temp = new Node(number);

    if(pos == 1){
        temp -> next = head;
        head = temp;
        return head;
    }

    int i=1;
    Node *curr = head;
    while(i < pos - 1){
        curr = curr -> next;
        i++;
    }
    
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}


int main() {
    Node *head;
    head = new Node(5);
    head -> next =  new Node(15);
    head -> next -> next =  new Node(25);
    head -> next -> next -> next =  new Node(35);

    printList(head);

    head = insertAtPoint(1, 10, head);

    printList(head);
    return 0;
}