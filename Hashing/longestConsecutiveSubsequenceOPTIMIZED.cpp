#include <iostream>
#include <unordered_set>
using namespace std;

// OPTIMIZED APPROACH
int longestConsecutiveSubsequence(int n, int arr[]) {
    unordered_set<int> s(arr, arr + n); 
    int maxLen = 0;

    for (int x : s) {
        if (s.find(x - 1) == s.end()) {
            int currNum = x;
            int len = 1;

            while (s.find(currNum + 1) != s.end()) {
                currNum++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The Longest Consecutive Subsequence: " << longestConsecutiveSubsequence(n, arr);
    return 0;
}

// TIME COMPLEXITY - O(n), where 'n' is the size of the array
//SPACE COMPLEXITY - O(n), where 'n' is the size of the array