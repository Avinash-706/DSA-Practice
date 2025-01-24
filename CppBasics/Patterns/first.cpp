#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;


void sqaureVariant1(int n){
    cout<<endl<<"--VARIANT 1--"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}


void sqaureVariant2(int n){
    cout<<endl<<"--VARIANT 2--"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void sqaureVariant3(int n){
    cout<<endl<<"--VARIANT 3--"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << char(j+64) << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void sqaureVariant4(int n){
    cout<<endl<<"--VARIANT 4--"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (j%2==0) cout << 0 << " ";
            else cout << 1 << " "; 
        }
        cout << endl;
    }
    cout << endl;
}


void sqaureVariant5(int n){
    cout<<endl<<"--VARIANT 5--"<<endl;
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


void traingleVariant1(int n){
    cout<<endl<<"--VARIANT 1--"<<endl;
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


void traingleVariant2(int n){
    cout<<endl<<"--VARIANT 2--"<<endl;
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
void traingleVariant3(int n){
    cout<<endl<<"--VARIANT 3--"<<endl;
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


void traingleVariant4(int n){
    cout<<endl<<"--VARIANT 4--"<<endl;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}


void traingleVariant5(int n){
    cout<<endl<<"--VARIANT 5--"<<endl;

    for(int i=0; i<n ; i++){
        for(int j=0; j < i; j++){
            cout<< "  ";
        }       
        for(int j=0; j < n-i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout << endl;
}


void sqaurePattern(int n){
    cout<<endl<<"-- SQUARE PATTERNS --"<<endl;

    sqaureVariant1(n);
    sqaureVariant2(n);
    sqaureVariant3(n);
    sqaureVariant4(n);    
    sqaureVariant5(n);  
}

void trainglePattern(int n){
    cout<<endl<<"-- TRIANGLE PATTERNS --"<<endl;
    traingleVariant1(n);    
    traingleVariant2(n);    
    traingleVariant3(n);    
    traingleVariant4(n);
    traingleVariant5(n);
}

int main() {
    int n;
    cin>>n;
    sqaurePattern(n);
    trainglePattern(n);    

    return 0;
}

//33 - 203 cabin 17