#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN   - 10, 80, 30, 90, 40, 50, 70
// IN   - 5
// OUT  - 10  30  40  50  80  70  90

//Lomutu Partition always choose the FIRST INDEX as the PIVOT, 
//But this case is the modified one, In which USER decides -> the PIVOT ELEMENT.

int lomutuPartition(int n, int arr[], int p, int l, int h){
    swap(arr[h], arr[p]);
    int pivot = arr[h];
    int i = l-1;
    for(int j = l ; j <= h - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return  i+1;
}


int main() {
    // int n = 7;
    // int arr[7] = {10, 80, 30, 90, 40, 50, 70};
    // int p = 5;

    int n, p;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "Enter the Index of Element from which we want partition: ";
    cin >> p;

    int partitionIndex  = lomutuPartition(n, arr, p , 0, n-1);
    cout << "\nPivot is at index: " << partitionIndex  << " | Element is: " << arr[partitionIndex] << endl;
    for(int i : arr)    cout << i << " ";
    return 0;

}

// TIME  COMPLEXITY  - O(n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(1)