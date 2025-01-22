#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void difference(int n){
    int temp=n;
    int sumEven=0;
    int sumOdd=0;
    for(int i=1; temp>0; i++){
        int digit=temp%10;
        temp=temp/10;
        if(i%2!=0) sumOdd+=digit;
        else sumEven+=digit;
    }
    cout<<"Difference : "<<sumOdd-sumEven<<endl;
}

int main() {
    int n;
    cin>>n;
    difference(n);    
    return 0;
}