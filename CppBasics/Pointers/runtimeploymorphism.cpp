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
        cout<<endl<<"DISPLAY() WELCOME TO LPU"<<endl;
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
    LPU l;
    BLOCK c;
    l.display();
    c.display();//function overiding
    c.LPU::display();//manual invoking of base class, over
    return 0;
}