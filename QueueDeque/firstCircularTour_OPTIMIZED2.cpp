#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// MOST OPTIMIZED APPROACH 
int circularTour(int ptr[], int dist[], int n) {
    int start = 0;
    int prev_ptr = 0;
    int curr = 0;

    for (int i = 0; i < n; i++) {
        curr += ptr[i] - dist[i];
        if (curr < 0) {
            start = i + 1; 
            prev_ptr += curr;
            curr = 0;
        }
    }

    return ((curr + prev_ptr >= 0) ? start : -1); 
}

int main() {
    // // EXAMPLE 1
    // int n = 4;
    // int ptr[n]  = {4, 8, 7, 4};
    // int dist[n] = {5, 5, 3, 5};
    // // OUTPUT : 2
    
    int n;
    cout << "Enter the Number of Petrol Pumps : ";
    cin >> n;
    int ptr[n], dist[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the PETROL in Gas Station " << i + 1 << " and DISTANCE to next Gas Station : ";
        cin >> ptr[i] >> dist[i];
    }
    cout << "The Starting Index to Start The Optimized Journey Such that you NEVER Run out of Fuel : " << circularTour(ptr, dist, n);
}

// TIME  COMPLEXITY : O(n), where 'n' is the number of Gas Stations
// SPACE COMPLEXITY : O(1)
