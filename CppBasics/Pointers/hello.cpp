#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

class LPU{
    public:
    LPU(){
        cout<<"WELCPME TO LPU BY CONS ---"<<endl;
    }
    display(){
        cout<<endl<<"DISPLAY(): WELCOME TO LPU"<<endl;
    }
};

class BLOCK : public LPU{
    public:
    BLOCK(){
        cout<<"WELCOME TO BLOCK"<<endl;

    }
    display(){
        cout<<endl<<"DISPLAY(): WELCOME TO 37 BLOCK"<<endl;
    }
};
int main(){
    LPU lpu_obj, *lpu_ptr;
    BLOCK block_obj, *block_ptr;

    lpu_ptr = &lpu_obj;
    lpu_ptr -> display(); //base class ptr-base class obj

    block_ptr = &block_obj;
    block_ptr -> display(); //derived class ptr - derived class obj

    lpu_ptr = &block_obj;
    lpu_ptr -> display(); //base class ptr-base class obj
    return 0;
}

//MONDAY--
//POINTER COMPLETION
//POINTER IN A ARRAY
//TEMPLATE
//NAMESPACES

//TUESDAY --
//EXCEPTIONAL HANDLING