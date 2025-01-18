#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Relational Operation are only TRUE AND FALSE";
    cout<<"Relational Operation \nEnter the two Elements: ";
    cin>>a>>b;
    bool z=a>b;
    cout<<"  a"<< " > " << "b : "<< z <<endl;
    z=a<b;
    cout<<"a"<< " < " << "b : "<< z <<endl;
    z=a>=b;
    cout<<"a"<< " >= " << "b : "<< z <<endl;
    z=a<=b;
    cout<<"a"<< " <= " << "b : "<< z <<endl;
    z=a==b;
    cout<<"a"<< " == " << "b : "<< z <<endl;
    z=a!=b;
    cout<<"a"<< " != " << "b : "<< z <<endl;
}
