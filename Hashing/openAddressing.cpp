#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

struct MyHash{
    int *arr;
    int cap, size;

    MyHash(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
        for(int i = 0 ; i < cap ; i++)    arr[i] = -1;
    }

    int hash(int key){
        return key % cap;
    }

    bool insert(int key){
        if(size == cap)    return false;
        int i = hash(key);
        while(arr[i] != -1 && arr[i] != -2 && arr[i] != key)    i = (i+1) % cap;
        if(arr[i] == key)   return false;
        else{
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erase(int key) {
        int h = hash(key);
        int i = h;

        while (arr[i] != -1) {
            if (arr[i] == key) {
                arr[i] = -2;  
                size--;
                return true;
            }

            i = (i + 1) % cap;
            if (i == h)    return false;
        }
        return false;
    }

    bool search(int key){
        int h = hash(key);
        int i = h;

        while(arr[i] != -1){
            if(arr[i] == key)   return true;
            i = (i+1)%cap;
            if(i == h)    return false;
        }
        return false;
    }

    void print() {
        cout << endl << "Hash Table: " << endl;
        for (int i = 0 ; i < cap ; i++) {
            if (arr[i] == -1)   cout << "[ ] ";
            else if (arr[i] == -2)    cout << "[X] ";
            else    cout << "[" << arr[i] << "] ";
        }
        cout << endl;
    }

    ~MyHash() {
        delete[] arr; 
    }
};


int main() {
    MyHash mh(7);
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    mh.print();

    cout << endl << " -- Searching for 56 -- " << endl;
    cout << (mh.search(56) ? "Present" : "Not Present") << endl;

    cout << endl << " -- Removing 56 -- " << endl;
    mh.erase(56);
    mh.print();

    cout << endl << " -- Searching for 56 (AFTER DELETION) -- " << endl;
    cout << (mh.search(56) ? "Present" : "Not Present") << endl;
    
    return 0;
}