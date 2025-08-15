#include <iostream>
using namespace std;


// here         from    helper    to
void TOH(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}


int main() {
    int n;
    cout << "Enter the Number of disc : ";
    cin >> n;

    TOH(n, 'A', 'B', 'C');
    return 0;
}

// RECURRENCE RELATION :  T(n) = 2 * T(n - 1) + 1
//                     :  T(n) = 2^n - 1
// TIME  COMPLEXITY    :  O(2^n), Each step solves two subproblems of size n-1
// SPACE COMPLEXITY    :  O(n),   Recursive call stack depth