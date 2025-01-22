#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

bool primeCheck(int i){
    bool check=true;
    for(int y=2; y<=sqrt(i); y++ ){
        if(i%y == 0){
            check=false;
            break;
        }
    }
    if(check){
        return check;
    }
}

void factors(int n){
    int temp=n;
    int i=2;
    while(temp>1){
        while(temp%i==0 && primeCheck(i)){
            cout<< i << " X ";
            temp=temp/i;
        }
        i++;
    }
}


int main() {
    int n;
    cin>>n;
    factors(n);
    return 0;
}

//37-809