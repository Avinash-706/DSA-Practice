#include <bits/stdc++.h>
using namespace std;


void maxInSubArray(int arr[], int n, int k) {
    deque<int> dq;

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
}


int main() {
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