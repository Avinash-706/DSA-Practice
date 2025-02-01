#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <typeinfo>
using namespace std;


class student{
    public: 
    int num, sal;
    student(int num=0){
        this->num=num;
        this->sal=this->num;
        cout<<endl<<num<<endl;
    }
    
};


int main() {
    // int *yptr = new int;
    // cout << *yptr << endl;
    // cout << "Address: " << yptr << endl;
    // *yptr = 5;
    // cout <<"Value: "<< *yptr << endl;

    // student *sptr = new student;
    // sptr =  new student(1558);
    //LOST MEMORY BLOCK

    student *sptr1 = new student;
    student *sptr2 =  new student(1558);
    (*sptr1).sal= 500;
    cout << endl << *sptr1 << endl;
    sptr1 -> sal= 1000;
    cout << endl << sptr1 << endl;

    return 0;
}