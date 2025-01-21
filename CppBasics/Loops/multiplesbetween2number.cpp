#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int a, b, n, count=0;
    cout << "Enter two numbers followed by N: ";
    cin >> a >> b >> n;
    for(int i=a; i <= b; i++){ //INCLUSIVE of 2 numbers also
        if(i % n == 0) {cout << i << endl; count++;}
    }
    cout << "Total Number of Multiples between "<< a<< " and "<<b<<" : " <<count;
    return 0;

}