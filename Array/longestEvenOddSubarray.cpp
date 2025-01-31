#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//1, 2, 3, 4, 5, 7, 9
//5

// void checkNextOdd(int x, int &count){
//     if(x % 2 != 0) count++;
//     else count=1;
// }

// void compute(int n, int arr[]){
//     int count=1;
//     for(int i = 0 ; i < n ; i++){
//         //even
//         if(arr[i] % 2 == 0){
//             checkNextOdd(arr[i+1], count);
//         }

//         //odd
//         if(arr[i] % 2 != 0){

//         }
//    }
// }


int compute(int n, int arr[]){
    int max_count=1;
    int count=1;

    for(int i = 0 ; i < n ; i++){

    //     //Approach 1
    //     //even odd
    //     if(arr[i] % 2 == 0  &&  arr[i+1] % 2 != 0)    count++;
    //     //odd even
    //     else if(arr[i] % 2 != 0 && arr[i+1] % 2 == 0 )    count++;
    //     else    count=1;
    //     max_count=max(max_count, count);


        //Approach 2
        //even & next->odd   OR  odd & next->even
        if((arr[i] % 2 == 0  &&  arr[i+1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i+1] % 2 == 0 )){
            count++;         
            max_count=max(max_count, count);
        }
        else    count=1;

    }
   return max_count;
}

int main() {
    // int n=7;
    // int arr[7]={1, 2, 3, 4, 5, 7, 9};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << compute(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n), where n is the size of the array.
//SPACE COMPLEXITY - O(1)