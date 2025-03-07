#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int mettingMaximumGuests(int n, int arr[], int dep[]){
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i = 1, j = 0, res = 1, curr = 1;
    int start = arr[0], end  = dep[0];
    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            curr++;
            if (curr > res) {
                res = curr;
                start = arr[i];  
                end = dep[j];    
            }
            i++;
        }
        else{
            curr--;
            j++;
        }

    }
    cout << endl << "Minimum Time Range For Max Guest Visits : " << start  << " - " << end << endl; 
    return res;
}


int main() {
    // int n = 3;
    // int arrival[n] = {900, 600, 700};
    // int departure[n] = {1000, 800, 730};

    int n;
    cout << "\nEnter the number of guests: ";
    cin >> n;

    int arrival[n], departure[n];

    cout << "Enter arrival and departure times (FORMAT: Arrival Departure)  (NOTE: Arrival <= Departure):\n";
    for (int i = 0; i < n; i++) {
        cout << "  Guest " << i + 1 << ": ";
        cin >> arrival[i] >> departure[i];
    }

    cout << "Maximum Guest can be attended in Minimum Time Interval : " << mettingMaximumGuests(n, arrival, departure);
    return 0;
}