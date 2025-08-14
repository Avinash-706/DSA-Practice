#include <iostream>
using namespace std;


void decimalToBinary(int n){
    if(n == 0)  return  ;
    decimalToBinary(n / 2);
    cout << n % 2;
}


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Binary Representation of " << n << " : ";
    decimalToBinary(n);
    return 0;
}

// TIME  COMPLEXITY  : O(log n), where 'n' is the input number
// SPACE COMPLEXITY  : O(log n), due to recursion stack
