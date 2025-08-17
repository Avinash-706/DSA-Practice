#include <iostream>
using namespace std;


// APPROACH 1 : SUBTRACT EACH ELEMENT to the  Actual SUM and if n == 0 && SUM == 0 at last then return 1 else 0
int subsets(int n, int arr[], int sum){
    if(n == 0)  return  (sum == 0) ? 1 : 0;
    return subsets(n-1, arr, sum) + subsets(n-1, arr, sum - arr[n-1]);
}


int main() {
    int n, sum;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)    cin >> arr[i];

    cout << "Enter the required subset sum: ";
    cin >> sum;

    cout << "\nProblem Explanation:" << endl;
    cout << "We are given an array of " << n << " elements, and we need to find" << endl;
    cout << "the total number of subsets whose sum equals " << sum << "." << endl << endl;

    cout << "Result:" << endl;
    cout << "The total number of subsets : " << subsets(n, arr, sum) << endl;

    return 0;
}

// TIME  COMPLEXITY : O(2^n)
// SPACE COMPLEXITY : O(n)