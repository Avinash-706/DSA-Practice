#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int firstOccurence(int n, int arr[], int number){

    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > number)   high = mid - 1;
        else if(arr[mid] < number)    low = mid + 1; 
        else{
            if(mid == 0 || arr[mid-1] != arr[mid]) return mid;
            else high = mid - 1;
        }
    }
    return -1;

}


int lastOccurence(int n, int arr[], int number){

    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > number)   high = mid - 1;
        else if(arr[mid] < number)    low = mid + 1; 
        else{
            if(mid == n-1 || arr[mid+1] != arr[mid]) return mid;
            else low = mid + 1;
        }
    }
    return -1;

}


int main() {
    // int n = 6;
    // int arr[6] = {10, 10, 10, 10, 10, 10};
    // int number = 10;

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

    int first = firstOccurence(n, arr, number);
    int last = lastOccurence(n, arr, number);

    cout << "The Count of the Occurences of this Number is: " << last - first + 1;
    return 0;
}

// TIME COMPLEXITY: O(log n), where 'n' is the size of the array
// SPACE COMPLEXITY: O(1)