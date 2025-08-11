#include <iostream>
#include <deque>
using namespace std;


// OPTIMIZED APPROACH : BUT O(n) - space complexity 
int circularTour(int ptr[], int dist[], int n) {

    deque<int> dq;
    int curr_ptr = 0;
    int index = 0;
    int visited = 0;

    while(visited < n && index < 2 * n ){   // Try each station at most once

        curr_ptr = curr_ptr + (ptr[index % n] - dist[index % n]);
        dq.push_back(index % n);
        visited++;
        index++;

        while (curr_ptr < 0 && !dq.empty()) {
            curr_ptr = curr_ptr - (ptr[dq.front()] - dist[dq.front()]);
            dq.pop_front();
            visited--;
        }
    }

    return (visited == n) ? dq.front() : -1;
}

int main() {
    // EXAMPLE 1
    int n = 4;
    int ptr[n]  = {4, 8, 7, 4};
    int dist[n] = {5, 5, 3, 5};
    // OUTPUT : 2
    

    // int n;
    // cout << "Enter the Number of Petrol Pumps : ";
    // cin >> n;
    // int ptr[n], dist[n];
    // for (int i = 0; i < n; i++) {
    //     cout << "Enter the PETROL in Gas Station " << i + 1 << " and DISTANCE to next Gas Station : ";
    //     cin >> ptr[i] >> dist[i];
    // }

    cout << "The Starting Index to Start The Optimized Journey Such that you NEVER Run out of Fuel : " << circularTour(ptr, dist, n);
}

// TIME  COMPLEXITY : O(n), where 'n' is the number of petrol pumps
// SPACE COMPLEXITY : O(n), Deque stores at most 'n' petrol pump indices in the worst case