#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

bool checkPrime(int rem){
    bool check=true;
    for(int i=2; i<=sqrt(rem); i++ ){
        if(rem%i == 0){
            check=false;
            break;
        }
    }
    return check;
}

void sum(int n){
    int temp=n;
    int primeSum=0;
    int nonPrimeSum=0;
    while(temp>0){
        int rem=temp%10;
        temp=temp/10;
        if(checkPrime(rem)) primeSum+=rem;
        else nonPrimeSum+=rem;
            
    }
    cout << "Sum of Primes Digits:  " << primeSum << endl;
    cout << "Sum of NON - Primes Digits:  " << nonPrimeSum << endl;
    cout << "Difference: " << primeSum-nonPrimeSum << endl;
    
}

int main() {
    int n;
    cin>>n;
    sum(n);
    return 0;
}