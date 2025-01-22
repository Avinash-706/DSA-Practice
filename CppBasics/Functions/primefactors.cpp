#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;


void primeCheck(int i){
    bool check=true;
    for(int y=2; y<=sqrt(i); y++ ){
        if(i%y == 0){
            check=false;
            break;
        }
    }
    if(check){
        cout<<i<<" X ";
    }
}

void factors(int n){
    for(int i=2; i <= n; i++){
        if(n%i==0){
            primeCheck(i);
        }
    }
}


int main() {
    int n;
    cin>>n;
    factors(n);
    return 0;
}

//37-809