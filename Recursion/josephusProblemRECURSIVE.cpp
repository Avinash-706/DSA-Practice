#include <iostream>
using namespace std;


int josephus(int n, int k) {
    if (n == 1)    return   0;  
    return         (josephus(n - 1, k) + k) % n;  
}


int main() {
    int n, k;

    cout << "Enter the total number of persons standing in the circle : ";
    cin >> n;
    cout << "Enter the value of K (i.e., every K-th person will be killed) : ";
    cin >> k;

    cout << "\nProblem Explanation :" << endl;
    cout << "There are " << n << " persons standing in a circle, numbered from 0 to " << n - 1 << "." << endl;
    cout << "Starting from person 0, every " << k << "-th person will be eliminated in the circle," << endl;
    cout << "and this process continues until only one person remains alive." << endl << endl;


    cout << "Result :" << endl;
    cout << "The last surviving person will be at index : " << josephus(n, k) << " (0-based indexing)" << endl;
    return 0;
}

// TIME  COMPLEXITY : O(n)
// SPACE COMPLEXITY : O(n)