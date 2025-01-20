#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Two Number: ";
    cin>>a>>b;

    switch(a>b){
        case true:
        cout << a << "  >  " << b;
        break;

        case false:
        cout << a << "  <  " << b;
        break;
    }
}