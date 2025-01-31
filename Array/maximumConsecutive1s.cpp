#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int maximumConsecutive1s(int n, int arr[]){
    int max_count=0;
    int count = 0;
    //1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 1 && arr[i+1] == 1){
            // if (max_count < count)  max_count=count;
            // count=0;
            // cout<<arr[i]<<"   ";
            count++;
        }
        else{
            if (max_count < count)  max_count=count;
            count=0;
        }
    }
    if (max_count < count)  max_count=count;
    return max_count+1;

}


int main() {
    int n=12;
    int arr[12]={1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout << maximumConsecutive1s(n, arr);
    return 0;
}