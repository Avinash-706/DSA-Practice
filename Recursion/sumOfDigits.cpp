#include <iostream>
#include <string>
using namespace std;


int sumOfDigits(int n) {
    if(n <= 9)  return  n;
    return (n%10) + sumOfDigits(n/10);
}


int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    cout << "Sum of Digits : " << sumOfDigits(n) << endl;
    return 0;
}

// TIME  COMPLEXITY  : O(log n)
// SPACE COMPLEXITY  : O(log n)