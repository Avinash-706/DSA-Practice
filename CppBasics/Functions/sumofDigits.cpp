#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int sumofDigits(int n){
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<sumofDigits(n);
    return 0;
}