#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutiveSubsequence(int n, int arr[]) {
    unordered_set<int> s(arr, arr + n); 
    int maxLen = 0;

    for (int x : s) {
        if (s.find(x - 1) == s.end()) {
            int currNum = x;
            int len = 1;

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
