#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


class student{

    string name;
    int roll;
    float total, perc;

    public: 

    student(student &obj){
        cout<<endl<<"COPY CONS CALLED"<<endl;
        name=obj.name;
        roll=obj.roll;
        total=obj.total;
        display();
    }

    student(){
        cout<<endl<<"Constructor called"<<endl;
    }

    student(string name1, int roll1, float total1){
        cout<<"PC CONSTRUCTOR CALLED"<<endl;
        name=name1;
        roll= roll1;
        total=total1;
        calculate();
    }

    ~student(){
        cout<<endl<<"Destructor called"<<endl;
    }

    // void input(){
    //     cout<<"Name: ";
    //     cin>>name;
    //     cout<<"Enter roll :";
    //     cin>>roll;
    //     cout<<"Enter marks: ";
    //     cin>>total;
    // }

    void calculate(){
        perc=total/5;
        display();
    }

    void display(){
        cout<<"\n Details: "<<endl;
        cout<<name<<endl<<roll<<endl<<total<<endl<<perc<<endl;
    }
};


int main() {
    student s("Avinash", 45, 400), s1;
    cout<<"Welcome to OOPS"<<endl;
    s1=s;
    s1.display();
    // s.input();
    // s.calculate();
    // s.display();
    return 0;

}