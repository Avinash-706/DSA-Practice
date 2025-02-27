#include <iostream>
using namespace std;

int mergeAndCount(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++) left[i] = arr[l + i];
    for (int i = 0; i < n2; i++) right[i] = arr[m + 1 + i];

    int res = 0, i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
            res += (n1 - i); 
        }
        k++;
    }

    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];

    return res;
}

int countInversion(int n, int arr[], int l, int r) {
    int res = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        res += countInversion(n, arr, l, m);
        res += countInversion(n, arr, m + 1, r);
        res += mergeAndCount(arr, l, m, r);
    }
    return res;
}

int main() {
    // int n = 4;
    // int arr[4] = {2, 10, 8, 7};

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

    cout << countInversion(n, arr, 0, n - 1); 
    return 0;
}
