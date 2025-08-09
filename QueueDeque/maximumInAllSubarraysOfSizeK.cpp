#include <bits/stdc++.h>
using namespace std;

// REASON FOR STORING INDEXES INSTEAD OF VALUE :
// This works because dq.front() is an index, so you can directly check if it is out of the window range
// If you store only values, you can’t easily check whether that value was the one leaving the window, because:

// 1. The value might be duplicated in the array.
// 2. Without the index, you can’t know the position in the original array.

void maxInSubArray(int arr[], int n, int k) {
    deque<int> dq;

    // METHOD 1:
    for(int i = 0; i < n; i++) {
        if(!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        while(!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        dq.push_back(i);

        if(i >= k - 1)
            cout << arr[dq.front()] << " ";
    }
    cout << endl;


    // // METHOD 2:
    // // Process first k elements
    // for (int i = 0; i < k; i++) {
    //     while (!dq.empty() && arr[i] >= arr[dq.back()])
    //         dq.pop_back();
    //     dq.push_back(i);
    // }

    // // Process the rest
    // for (int i = k; i < n; i++) {
    //     cout << arr[dq.front()] << " ";

    //     // Remove elements out of this window
    //     while (!dq.empty() && dq.front() <= i - k)
    //         dq.pop_front();

    //     // Remove all elements smaller than the currently added element
    //     while (!dq.empty() && arr[i] >= arr[dq.back()])
    //         dq.pop_back();

    //     dq.push_back(i);
    // }


}


int main() {
    // // SAMPLE CODE 
    // int n = 6;
    // int arr[n] = {20, 5, 3, 8, 6, 15};
    // int k = 4;

    // USER INPUT
    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Enter the window size (k): ";
    cin >> k;

    cout << "Maximum of all subarrays of size " << k << ":\n";
    maxInSubArray(arr, n, k);

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array
// SPACE COMPLEXITY : O(k), for storing indices in the deque