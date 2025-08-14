#include <iostream>
using namespace std;


void printNto1(int n){
    if(n == 0)  return  ;
    cout << n << " ";
    printNto1(n-1);
}


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "OUTPUT : ";
    printNto1(n);
    return 0;
}

// T(n) = T(n-1) + O(1)
// TIME  COMPLEXITY  : O(n), where 'n' is the input number
// SPACE COMPLEXITY  : O(n), due to recursion stack
