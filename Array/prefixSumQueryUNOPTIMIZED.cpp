#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//INPUTS - 2, 8, 3, 9, 6, 5, 4
//INPUTS - 0 to 2
//INPUTS - 1 to 3
//OUPUTS - 13
//OUPUTS - 20

//UNOPTIMIZED APPROACH
void print(int start, int end, int sum){
    cout << "Sum of Elements from position " << start << " to " << end << " : " << sum << endl;
}

void prefixSumQuery(int n, int arr[], int start, int end){
    int sum = 0;
    for(int i = start ; i <= end ; i++){
        sum += arr[i];
    }
    print(start, end, sum);
}

void input(int n, int arr[], int inputs){

    for(int i = 0 ; i < inputs ; i++){
        int start, end;
        cout<<"Enter the starting and ending position : ";
        cin >> start >> end ;
        prefixSumQuery(n, arr, start, end);
    }

    // prefixSumQuery(n, arr, 0, 2);
    // prefixSumQuery(n, arr, 1, 3);
}


int main() {
    // int n=7;
    // int arr[7]={2, 8, 3, 9, 6, 5, 4};
    // int inputs=3;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int value;
        cin >> value;
        arr[i] = value;
    }

    cout << "\n Enter the Total Number of Input of Ranges: ";
    int inputs;
    cin >> inputs;

    input(n, arr, inputs);
    return 0;
}

//TIME COMPLEXITY - O(n), where n is the size of the array.
//SPACE COMPELXITY - O(1)