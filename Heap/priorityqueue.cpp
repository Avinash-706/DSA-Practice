#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//INSERTION
//DELETION

void insertHeap(vector<int> &arr, int x)
{
    if(arr.size() == 0){
        arr.push_back(x);
        return;
    }

    arr.push_back(x);
    int i = arr.size() - 1;

    while(i > 0){
        int parent  = (i - 1) / 2;
        if(arr[parent] < arr[i]){
            swap(arr[parent], arr[i]);
            i=parent;
        }
        else break;
    }
}


void heapify(vector<int> &arr, int i) {
    int largest = i;           // Initialize largest as root
    int n = arr.size();
    int l = 2 * i + 1;         // Left child index
    int r = 2 * i + 2;         // Right child index

    if (l < n && arr[l] > arr[largest])  
        largest = l;

    if (r < n && arr[r] > arr[largest])  
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n);  // Recursively heapify the affected subtree
    }
}


void pop(vector<int> &arr){

    int n=arr.size() - 1;
    if(n == 1)  {
        arr.pop_back();
        return;
    }
    arr[0] = arr[n-1];
    arr.pop_back();

    heapify(arr, 0);

}


int main() {
    vector<int> arr;

    insertHeap(arr, 12);
    insertHeap(arr, 47);
    insertHeap(arr, 34);
    insertHeap(arr, 9);
    insertHeap(arr, 11);
    insertHeap(arr, 27);
    insertHeap(arr, 32);
    insertHeap(arr, 97);
    insertHeap(arr, 66);
    insertHeap(arr, 55);
    insertHeap(arr, 101);



    pop(arr);

    for(int i=0 ; i < 14 ;  i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
