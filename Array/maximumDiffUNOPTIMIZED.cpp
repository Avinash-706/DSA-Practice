#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN - {2, 3, 10, 6 ,4, 8, 1}
//OUT - 8
//UNOPTIMIZED APPROACH
void maxDifference(int n, int arr[]){
    int max=0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n ; j++){
            if(arr[j]-arr[i] > max ) max=arr[j]-arr[i];
        }
    }
    cout<<"MAX DIFFERNCE: "<<max<<endl;
}


int main() {
    // int n=6;
    // int arr[6]={7, 9, 5, 6, 3, 2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    maxDifference(n, arr);
    return 0;
}
