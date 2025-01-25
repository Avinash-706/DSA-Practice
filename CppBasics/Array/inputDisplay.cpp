#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void display(int arr[], int n){
    sort(arr, arr+n);
    cout<<"Array :  ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }

}

void input(int arr[], int n){
    cout<<"Enter the Elements of the Array :  "<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    display(arr, n);
}



int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    input(arr, n);
    return 0;
}