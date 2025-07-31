#include <bits/stdc++.h>
using namespace std;

// NAIVE SOLUTION
int largestRectangleNaive(vector<vector<int>>& arr, int n, int m) {
    int maxArea = 0;

    for (int i1 = 0; i1 < n; i1++) {
        for (int j1 = 0; j1 < m; j1++) {
            for (int i2 = i1; i2 < n; i2++) {
                for (int j2 = j1; j2 < m; j2++) {
                    bool allOnes = true;
                    for (int i = i1; i <= i2; i++) {
                        for (int j = j1; j <= j2; j++) {
                            if (arr[i][j] == 0) {
                                allOnes = false;
                                break;
                            }
                        }
                        if (!allOnes) break;
                    }
                    if (allOnes) {
                        int area = (i2 - i1 + 1) * (j2 - j1 + 1);
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    }

    return maxArea;
}

int main() {
    vector<vector<int>> arr = {
        {1, 0, 0, 1, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1}
    };

    int n = arr.size();
    int m = arr[0].size();

    cout << "Original Histogram: " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    int maxArea = largestRectangleNaive(arr, n, m);
    cout << "Largest Area of Rectangle with All 1's : " << maxArea << endl;
}
