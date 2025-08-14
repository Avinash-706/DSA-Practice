#include <iostream>
using namespace std;


// TAIL RECURSIVE   --hence MUCH Faster
void print1toN(int n, int k){
    if(n == 0)  return  ;
    cout << k << " ";
    print1toN(n-1, k+1);
}


int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "OUTPUT : ";
    print1toN(n, 1);
    return 0;
}

// T(n) = T(n-1) + O(1)
// TIME  COMPLEXITY  : O(n), where 'n' is the input number
// SPACE COMPLEXITY  : O(n), normally, but can be O(1) if compiler applies tail call optimization
