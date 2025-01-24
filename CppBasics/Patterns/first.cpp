#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void function1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void function2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void function3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << char(j+64) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void function4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (j%2==0) cout << 0 << " ";
            else cout << 1 << " "; 
        }
        cout << endl;
    }
    cout << endl;
}

void function5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1) 
                cout << "* ";
            else 
                cout << "  "; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;
    function1(n);
    function2(n);
    function3(n);
    function4(n);    
    function5(n);    

    return 0;
}
