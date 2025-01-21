#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int isPrime(int n){
    bool check=true;
    for(int j=2; j <= n/2 ; j++){ 
        if(n%j == 0){
            check=false;
            break;
        }
    }
    return check;
}


int main() {
    int n;
    cin>>n;
    cout<< (isPrime(n) ? n+2 : n-2);
    return 0;
}