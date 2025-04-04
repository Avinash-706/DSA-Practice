#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
#include <unordered_map>
using namespace std;

//IN -> left[]  : 1, 2, 5, 15
//IN -> right[] :  5, 8, 7, 18
//OP -> 5 : 3 times

//UNOPTIMIZED APPROACH
void maximumAppearingElement(int n, int left[], int right[]){
    unordered_map <int , int> count;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = left[i] ; j <= right[i] ; j++){
            count[j]++;
        }
    }

    auto maxElement = std::max_element(count.begin(), count.end(), [](auto &a, auto &b) { return a.second < b.second; });
    cout << "The Element with Maximum Frequency: " << maxElement -> first  <<" | Frequecy : "<<maxElement -> second;
}


int main() {
    // int n=4;
    // int left[4]  = {1, 2, 5, 15};
    // int right[4] = {5, 8, 7, 18};

    int n;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    int left[n], right[n];
    for(int i=0; i < n; i++){
        int l_input, r_input;
        cout << "  Enter The Left and Right Range ( Note : Range Must be in Increasing Order ): ";
        cin >> l_input >> r_input;
        left[i] = l_input;
        right[i] = r_input;

    }

    maximumAppearingElement(n, left, right);
    return 0;
}

// TIME COMPLEXITY: O(n * MAX), 'n' is the number of ranges, 'MAX' is the maximum number of elements in any range
// SPACE COMPLEXITY: O(MAX), 'MAX' is the maximum number of elements in any range