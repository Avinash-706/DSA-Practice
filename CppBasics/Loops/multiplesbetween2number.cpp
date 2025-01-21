#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int a, b, n;
    cout << "Enter two numbers followed by N: ";
    cin >> a >> b >> n;
    for(int i=a; i <= b; i++){
        if(i % n == 0) cout <<i << endl;
    }
    return 0;
}