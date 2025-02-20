#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//TYPE1:
//CONDITIONS:
// "Enter the elements such that :"
// "1. only one element repeat any number of times"
// "2. All Elements from 1 to max(arr) must be present
// "3. 0 <= max(Arr) <= n


//IN  - 0, 2, 1, 3, 2, 2
//OUT - 2

//IN  - 0, 0
//OUT - 0

//OPTIMIZED APPROACH
int repeatingElements(int n, int arr[]){
    int slow = arr[0], fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];

    }
    while (slow != fast);
    slow = arr[0];
    while (slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}


int main() {
    // int n = 7;
    // int arr[7] = {1, 2, 3, 0, 3, 4, 5};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements such that :\n" << 
    "1. only one element repeat any number of times\n" <<
     "2. All Elements from 0 to max(arr) must be present\n" ;
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "\nRepeating Element: " << repeatingElements(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n²), where 'n' is the size of the array.
//SPACE COMPLEXITY - O(1)