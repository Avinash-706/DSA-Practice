#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN   -  2, 4, 1 , 3 , 5
//OUT  - 
//(2,1)
//(4,1)
//(4,3)
//COUNT - 3

//UNOPTIMIZED APPROACH
void countInversions(int n, int arr[]){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            if(arr[j] < arr[i]){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
                count++;
            }
        }
    }
    cout << "Count : " << count << endl;
}


int main() {
    // int n = 4;
    // int arr[4] = {40, 30, 20, 10};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    countInversions(n, arr);
    return 0;
}

//  TIME  COMPLEXITY  - O(n²), where 'n' is the size of the array
// SPACE  COMPLEXITY  - O(1)