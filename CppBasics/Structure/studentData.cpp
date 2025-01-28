#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
#include <limits.h>
using namespace std;

struct studentData
{
    string name;
    float marks[5], total=0, perc=0;
    int roll;
};

void input(studentData &s){
    cout<<"Enter name: ";
    getline(cin, s.name);
    cout<<"Enter roll: ";
    cin>>s.roll;
    cout<<"Enter Marks of all 5: ";
    cin>>s.marks[0]>>s.marks[1]>>s.marks[2]>>s.marks[3]>>s.marks[4];
}

void calculate(studentData &s){
    s.total=s.marks[0]+s.marks[1]+s.marks[2]+s.marks[3]+s.marks[4];
    s.perc=s.total/5;
}

void display(studentData &s){
    cout<<"Total Marks: "<<s.total<<endl;
    cout<<"Percentage: "<<s.perc<<endl;
}

int main(){
    studentData s;
    input(s);
    calculate(s);
    display(s);
}

//WAP that will give details of the topper of the class.