#include <iostream>
#include <climits>
using namespace std;

//IN  - 10, 20, 30, 40, 50
//IN  - 5 , 15, 25, 35, 45
//OUT - 27.5

//OPTIMIZED APPROACH
double findMedianSortedArrays(int arr1[], int n1, int arr2[], int n2) {
    if (n1 > n2) return findMedianSortedArrays(arr2, n2, arr1, n1);

    int low = 0, high = n1;
    int total = n1 + n2;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (total + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : arr1[partitionX - 1];
        int minRightX = (partitionX == n1) ? INT_MAX : arr1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : arr2[partitionY - 1];
        int minRightY = (partitionY == n2) ? INT_MAX : arr2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if (total % 2 == 0)
                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
            else
                return double(max(maxLeftX, maxLeftY));
        } else if (maxLeftX > minRightY) {
            high = partitionX - 1;  // Move left
        } else {
            low = partitionX + 1;   // Move right
        }
    }

    return -1;
}

void input(int n, int arr[]){
    cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
}

int main() {
    // int arr1[] = {1, 2, 3, 4, 5, 6};
    // int arr2[] = {9, 20, 30, 40, 50, 60};
    // int n1 = 6, n2 = 6;

    int n1, n2;
    cout << "Enter the size of the array1: ";
    cin >> n1;
    int arr1[n1];
    input(n1, arr1);
    cout << "Enter the size of the array2: ";
    cin >> n2;
    int arr2[n2];
    input(n2, arr2);

    cout << endl <<"MEDIAN: " << findMedianSortedArrays(arr1, n1, arr2, n2);;

    return 0;
}


//TIME COMPLEXITY  - O(log n), where 'n' is the smallest size of the array among n1 and n2.
//SPACE COMPLEXITY - O(1)