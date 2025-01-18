#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"--Logical Operators are the operators which are ysed to club or Join \n Multiple Conditions To Give a Single Output either TRUE or FALSE--"<<endl;
    cout<<"Logical Operation \nEnter the two Elements: ";
    cin>>a>>b;
    cout<<"!a : "<< !a << endl;
    cout<<"a && b : "<< bool(a&&b) << endl;
    cout<<"a || b : "<< bool(a||b) << endl;

}