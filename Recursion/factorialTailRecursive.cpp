#include <iostream>
using namespace std;


// TAIL RECURSIVE METHOD
int factorial(int n, int res){
    if(n == 1 || n == 0)  return  res;
    factorial(n-1, res*n);
}

// // NON TAIL RECURSIVE METHOD
// int factorial(int n){
//     if(n == 0 || n == 1)    return  1;
//     return n * factorial(n-1);
// }


int main() {
    int n = 5;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "The Factorial of " << n << " : " << factorial(n, 1);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the input number
// SPACE COMPLEXITY : O(1) if compiler applies tail call optimization
//                    O(n) without optimization (due to call stack) -- NON TAIL RECURSIVE METHOD