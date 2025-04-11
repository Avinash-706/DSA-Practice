#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL; 
    }
};

void printLinkedList(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr->next;
    }
}

Node *insertBegin(Node *head, int x){
    Node *temp = 
}

int main() {

    printLinkedList(head);
    return 0;
}