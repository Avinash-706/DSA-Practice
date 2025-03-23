#include <iostream>
#include <unordered_map>
using namespace std;

int longestConsecutiveSubsequence(int n, int arr[]) {
    unordered_map<int, int> seqMap; // Stores {value, length of consecutive sequence}
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int num = arr[i];

        // If the number is not already in the map
        if (seqMap.find(num) == seqMap.end()) {
            int left = (seqMap.find(num - 1) != seqMap.end()) ? seqMap[num - 1] : 0;
            int right = (seqMap.find(num + 1) != seqMap.end()) ? seqMap[num + 1] : 0;
            
            // Calculate total length of the sequence
            int len = left + 1 + right;
            
            // Store the sequence length at num and its boundaries
            seqMap[num] = len;
            seqMap[num - left] = len; // Update leftmost boundary
            seqMap[num + right] = len; // Update rightmost boundary
            
            // Update max length
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
