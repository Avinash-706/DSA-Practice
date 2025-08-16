#include <iostream>
using namespace std;


// APPROACH 1 : ADD EACH ELEMENT to the  ''curr_sum'' And MATCH with  ACTUAL ''sum'' 
int subsets(int n, int arr[], int sum, int curr_sum=0, int i = 0){
    if(sum == curr_sum ){
        return 1; 

    }
    if(i == n)  return 0;
    int count = 0;
    count += subsets(n, arr, sum, curr_sum, i+1);
    count += subsets(n, arr, sum, curr_sum + arr[i], i+1);

    return count;

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