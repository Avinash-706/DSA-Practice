#include <iostream>
using namespace std;


// NOT TAIL RECURSIVE   --hence NOT Much Faster
void print1toN(int n){
    if(n == 0)  return  ;
    print1toN(n-1);
    cout << n << " ";
}


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "OUTPUT : ";
    print1toN(n);
    return 0;
}

// T(n) = T(n-1) + O(1)
// TIME  COMPLEXITY  : O(n), where 'n' is the input number
// SPACE COMPLEXITY  : O(n), due to recursion stack
