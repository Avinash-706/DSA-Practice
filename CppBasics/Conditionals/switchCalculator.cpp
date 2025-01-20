#include<iostream>
using namespace std;

int main(){
    int a, b;
    char n;
    cin>>a>>n>>b;
    switch(n){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<float(a)/b;
        break;
    }
}