#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int st, end;
};

bool myComp(Interval a, Interval b) {
    return a.st < b.st;
}

void mergeIntervals(vector<Interval>& arr) {
    if (arr.empty()) return;

    sort(arr.begin(), arr.end(), myComp);
    int res = 0;    

    for (int i = 1; i < arr.size(); i++) {

        if (arr[res].end >= arr[i].st) {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st, arr[i].st);
        } else {
            res++;
            arr[res] = arr[i];
        }
    }
    cout << "AFTER MERGING OVERLAPPING INTERVALS : ";
    for(int i = 0; i <= res; i++){
        cout << "{" << arr[i].st << ", " << arr[i].end << "}  ";
    }

}

int main() {
    // vector<Interval> intervals = {{5, 10}, {3, 15}, {18, 30}, {2, 7}};

    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<Interval> intervals(n);
    cout << "Enter the intervals (Format: start end)  (NOTE: start  < end): \n";
    
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].st >> intervals[i].end;
    }

    mergeIntervals(intervals);

    return 0;
}

// TIME  COMPLEXITY  : O(n log n), where 'n' is the size of the Intervals
// SPACE COMPLEXITY : O(1) 
