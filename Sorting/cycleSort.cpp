#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// SORTED  |  UNSORTED
//      ←  i  →
// elements before i -> will always be sorted |  After i -> may or maynot be sorted

// Cycle Sort (Handles Duplicate Elements)
void cycleSort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int item = arr[i];
        int pos = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < item)
                pos++;
        }

        if (pos == i)
            continue;

        while (arr[pos] == item)
            pos++;

        swap(item, arr[pos]);

        while (pos != i) {
            pos = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < item)
                    pos++;
            }

            while (arr[pos] == item)
                pos++;

            swap(item, arr[pos]);
        }
    }
}

int main() {
    // int n = 5;
    // int arr[5] = {40, 30, 40, 10, 30};

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
    cycleSort(n, arr);

    cout<<"Array After Sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
