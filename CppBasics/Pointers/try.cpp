#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <typeinfo>
using namespace std;


void compute(int n, int arr[]){
   
}


int main() {
    int x=2;
    cout<<"X: "<<x<<endl;
    cout<<"ADDRESS: "<<&x<<endl;
    cout<<"DATA TYPE OF X: "<<typeid(x).name()<<endl;
    cout<<"SIZE OF  OF X: "<<sizeof(x)<<" bytes"<<endl;

    double *iptr;
    iptr=&x;
    cout<<"X: "<<iptr<<endl;
    cout<<"ADDRESS: "<<&iptr<<endl;
    cout<<"DATA TYPE OF X: "<<typeid(iptr).name()<<endl;
    cout<<"SIZE OF  OF X: "<<sizeof(iptr)<<" bytes"<<endl;
    return 0;
}