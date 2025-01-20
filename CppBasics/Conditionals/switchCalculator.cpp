#include<iostream>
using namespace std;

int main(){
    int a, b;
    char n;
    cout<<"Enter the Expression to Calculate: ";
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

        default:
        cout<<"-- Invalid Operator --"<<endl;
        break;
    }
}