#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

class evenOdd
{
    private:
    int num;

    public:
      
    void input(){
        cout << "Enter the number: ";
        cin >> num;
        check();
    }

    void check(){
        if(num%2 == 0) cout << "EVEN" << endl;
        else cout << "ODD" << endl;
    }

};

int main() {
    evenOdd s1;
    s1.input();
    return 0;
}