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
    cout << endl;
}


void function6(int n){
    int num=1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j < i ; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    cout << endl;
}


void function7(int n){
    int num=65;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << char(num);
            num++;
        }
        cout << endl;
    }
    cout << endl;
}
void function8(int n){

    for(int i = 1 ; i <= n ; i++){
        int num=65;
        for(int j = 1 ; j <= i ; j++){
            cout << char(num);
            num++;
        }
        cout << endl;
    }
    cout << endl;
}

void function9(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;
    function1(n);
    function2(n);
    function3(n);
    function4(n);    
    function5(n);    
    function6(n);    
    function7(n);    
    function8(n);    
    function9(n);    

    return 0;
}

//33 - 203 cabin 17