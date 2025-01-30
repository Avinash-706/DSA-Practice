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

    student(){
        cout<<endl<<"Constructor called"<<endl;
    }

    student(string name1, int roll1, float total1){
        name=name1;
        roll= roll1;
        total=total1;
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
    }

    void display(){
        cout<<"\n Details: "<<endl;
        cout<<name<<endl<<roll<<endl<<total<<endl<<perc<<endl;
    }
};


int main() {
    student s("Avinash", 45, 400);
    cout<<"Welcome to OOPS"<<endl;
    // s.input();
    s.calculate();
    s.display();
    return 0;

}