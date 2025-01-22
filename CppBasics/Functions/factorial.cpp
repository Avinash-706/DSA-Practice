#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void factorial(int n){
    int result=1;
    while(n>0){
        result*=n;
        n--;
    }
    cout<<"Factorial : " << result;
    
}

int main() {
    int n;
    cin>>n;
    factorial(n);
    return 0;
}