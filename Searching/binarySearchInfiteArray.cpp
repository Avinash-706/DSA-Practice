#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// IN - 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16........................
// IN - 1110
// OUT - 1109

//UNBOUNDED BINARY SEARCH
//-- HERE IT IS A CASE OF INFINITE SIZED ARRAY -- 
int binarySearch(int low, int high, int number, int arr[]) {

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == number)    return mid;
        else if (arr[mid] > number)    high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}


int search(int n, int arr[], int number) {
    if (arr[0] == number) return 0;

    int i = 1;
    while (i < n && arr[i] < number) {  
        i *= 2;
    }

    return binarySearch((i/2) + 1, min(i, n - 1), number, arr); 
}


int main() {
    // int n = 17;
    // int arr[17] = {1, 15, 20, 25, 30, 40, 50, 60, 80, 90, 99, 100, 110, 152, 157, 170, 180};
    // int number = 100;
    cout << "--- INFINITE SIZED ARRAY ---" << endl;
    
    int n, number;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout<<"\nEnter the Number to search from the Given Number: ";
    cin >> number;

    cout << "The Position of this Number is: " << search(n, arr, number);
    return 0;
}

//TIME COMPLEXITY - O(log position), where 'position' is the position of the number in the INFINITE SIZED ARRAY.
//SPACE COMPLEXITY - O(1)