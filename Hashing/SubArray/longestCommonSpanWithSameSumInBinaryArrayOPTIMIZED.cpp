#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int maxCommon(int n, int a[], int b[]){
    int temp[n];
    for(int i = 0 ; i < n ; i++){
        temp[i] = a[i]-b[i];
    }

	unordered_map<int, int> hM; 

	int sum = 0;	 
	int max_len = 0; 
	for (int i = 0; i < n; i++) 	{ 
		sum += temp[i]; 
		if (sum == 0)    max_len = i + 1; 
		if (hM.find(sum) != hM.end())    max_len = max(max_len, i - hM[sum]); 
		else    hM[sum] = i; 
	} 

    return max_len;
}


int main() {
    // int n = 7;
	// int a[n] = {0, 1, 0, 1, 1, 1, 1}; 
	// int b[n] = {1, 1, 1, 1, 1, 0, 1}; 

    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    int a[n], b[n];

    cout << endl << "Enter elements of first array (0s and 1s only): ";
    for(int i = 0; i < n; i++) {  
        cin >> a[i];
    }
    cout << endl << "Enter elements of second array (0s and 1s only): ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << "Maximum Common Span of Subarray between two array is : " << maxCommon(n, a, b);
    return 0;
}