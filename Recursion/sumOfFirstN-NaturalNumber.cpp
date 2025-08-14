#include <iostream>
using namespace std;


// NOT TAIL RECURSIVE  
int sum(int n){
    if(n == 0)  return 0;
    return  n + sum(n-1);    
}


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Sum of First " << n << " Natural Number : " << sum(n);
    return 0;
}

// T(n) = T(n-1) + O(1)
// TIME  COMPLEXITY : O(n)
// SPACE COMPLEXITY : O(n)