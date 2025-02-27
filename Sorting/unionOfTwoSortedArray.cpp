#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN  - 3, 5, 8
// IN  - 2, 8, 9, 10, 15
// OUT - 2, 3, 5, 8, 9, 10, 15

void UnionOfTwoSortedArray(int n1, int n2, int arr1[], int arr2[])
{
    int i = 0, j = 0;
    while (i < n1 && j < n2){
        if (i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        if (j > 0 && arr2[j] == arr2[j - 1]){
            j++;
            continue;
        }
        if (arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j]){
            cout << arr2[j] << " ";
            j++;
        }
        else{
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    while(i < n1)   cout << arr1[i++] << " "; 
    while(j < n2)   cout << arr2[j++] << " "; 
}

int main()
{
    // int n1 = 3, n2 = 5;
    // int arr1[3] = {3, 5, 8};
    // int arr2[5] = {2, 8, 9, 10, 15};

    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array (NOTE: In Sorted Increasing Order): ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array (NOTE: In Sorted Increasing Order): ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    UnionOfTwoSortedArray(n1, n2, arr1, arr2);
    return 0;
}

//  TIME  COMPLEXITY  - O(n1 + n2), where 'n1' & 'n2' are the size of array1 and array2 respectively.
// SPACE  COMPLEXITY  - O(1)