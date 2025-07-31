#include <bits/stdc++.h>
using namespace std;


int largestHistogram(int arr[], int n) {
    stack<int> s;  
    int maxArea = 0;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            int height = arr[s.top()];
            s.pop();

            int width = s.empty() ? i : (i - s.top() - 1);

            int area = height * width;
            maxArea = max(maxArea, area);
        }

        s.push(i); 
    }

    while (!s.empty()) {
        int height = arr[s.top()];
        s.pop();
        int width = s.empty() ? n : (n - s.top() - 1);
        int area = height * width;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}



int main() {
    int n = 4 , m = 5;
    int arr[n][m]={{1, 0, 0, 1, 1}, {0, 0, 0, 1, 1}, {1, 1, 1, 1, 1}, {0, 1, 1, 1, 1}};

    cout << "Original Histogram: " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }


    int maxArea = largestHistogram(arr[0], m);
    for(int i = 1; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == 1){
                arr[i][j] += arr[i-1][j];
            }
            maxArea = max(maxArea, largestHistogram(arr[i], m));
        }
    }

    cout << "Largest Area of Rectangular with All 1's : " << maxArea ;


}

// TIME  COMPLEXITY  : O(n * m), where 'n' is number of rows and 'm' is number of columns  
// SPACE COMPLEXITY  : O(m), for stack in largestHistogram