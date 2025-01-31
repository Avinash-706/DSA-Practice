#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN - 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1
//OUT - 4

int maximumConsecutive1s(int n, int arr[]){
    int max_count=0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0)    count = 0;
        else{
            count++;
            max_count=max(max_count, count);
        }
    }
    return max_count;

}


int main() {
    // int n=12;
    // int arr[12]={1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << maximumConsecutive1s(n, arr);
    return 0;
}