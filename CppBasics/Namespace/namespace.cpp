#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
// using namespace std;
using std::endl;


namespace lpu{
    int x=-1;
}

namespace cse{
    int x=-100;
}
int x;

int main() {
    int x=1; 
    int cout;
    std::cout<< endl << "main () X : " << x << endl;
    std::cout<< endl << "Global X : " << ::x << endl;
    std::cout<< endl << "LPU X : " << lpu::x << endl;
    std::cout<< endl << "CSE X : " << cse::x << endl;
    std::cout<< cout << endl;
    return 0;
}