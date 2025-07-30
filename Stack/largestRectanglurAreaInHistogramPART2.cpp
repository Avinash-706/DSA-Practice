#include <bits/stdc++.h>
using namespace std;

//OPTIMIZED APPROACH    --SINGLE TRAVERSAL
int getMaxArea(int arr[], int n) {
    stack<int> s;  
    int maxArea = 0;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            int height = arr[s.top()];
            s.pop();

            // Width of rectangle with height 'height'
            // If stack is empty, it means this height was smallest so far
            int width = s.empty() ? i : (i - s.top() - 1);

            int area = height * width;
            maxArea = max(maxArea, area);

            cout << "Popped index -> height: " << height 
                 << ", width: " << width 
                 << ", area: " << area << endl;
        }

        s.push(i); 
        cout << "Pushed index: " << i << " (height: " << arr[i] << ")\n";
    }

    while (!s.empty()) {
        int height = arr[s.top()];
        s.pop();
        int width = s.empty() ? n : (n - s.top() - 1);
        int area = height * width;
        maxArea = max(maxArea, area);

        cout << "Final pop -> height: " << height 
             << ", width: " << width 
             << ", area: " << area << endl;
    }
    return maxArea;
}

int main() {
    int arr[] = {6, 2, 5, 4, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Histogram: ";
    for (int i = 0; i < n; i++) cout << arr[i] << "  ";
    cout << "\n\n";

    int result = getMaxArea(arr, n);
    cout << "\nLargest Rectangular Area in Histogram: " << result << endl;
    return 0;
}

// TIME  COMPLEXITY  : O(n), each bar is pushed/popped once
// SPACE COMPLEXITY  : O(n), for stack