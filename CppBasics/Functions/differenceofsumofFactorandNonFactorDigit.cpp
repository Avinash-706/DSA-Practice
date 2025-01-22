#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void factorCheck(int n){
    int temp=n;
    int sumFactor=0;
    int sumNonFactor=0;
    while(temp>0){
        int rem=temp%10;
        temp=temp/10;
        if(n%rem==0) sumFactor+=rem;
        else sumNonFactor+=rem;
        cout<<"Difference :"<<sumFactor-sumNonFactor;
    }
}

int main() {
    int n;
    cin>>n;
    factorCheck(n);
    return 0;
}

