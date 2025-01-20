#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=750000){
        cout<<"NO TAX";
    }
    else if(n>750000 && n<=1000000){
        cout<<n/10;
    }
    else if(n>1000000 && n<=2000000){
        cout<<n/20;
    }
    else if(n>2000000){
        cout<<n/30;
    }
    
}