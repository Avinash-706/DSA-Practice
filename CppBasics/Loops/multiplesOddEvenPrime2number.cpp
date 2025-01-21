#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int multiplecount(int start, int end, int n){
    cout<<"Multiples of " << n << " between the numbers are: " << endl;
    int count=0;
    for(int i=start; i <= end; i++){ //INCLUSIVE of 2 numbers also
        if(i % n == 0) {cout << i << endl; count++;}
    }
    return count;
}

int evencount(int start, int end){
    int count=0;
    cout<<"Even Number between the Range are: " << endl;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0 ){ cout << i << endl; count++;}
    }
    return count;
}

int oddcount(int start, int end){
    int count=0;
    cout<<"Odd Number between the Range are: " << endl;
    for(int i = start; i <= end; i++){
        if(i % 2 != 0 ){ cout << i << endl; count++;}
    }
    return count;
}

bool isPrime(int i){
    bool check=true;
    for(int j=2; j <= i/2 ; j++){ 
        if(i%j == 0){
            check=false;
            break;
        }
    }
    return check;
}

int primecount(int start, int end){
    int count=0;
    cout << "Prime Numbers between the Range are: " << endl;
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            count++;
            cout << i << endl;
        }
    }
    return count;
}


int main() {
    int start, end, n; // Initialize primecount
    cout << "Enter two numbers followed by N: ";
    cin >> start >> end >> n;
    
    cout << "Total Number of Multiples between  "<< start << " and "<< end << " : " << multiplecount(start, end, n) << endl;
    cout << "Total Number of Even Number between  "<< start << " and "<< end << " : " << evencount(start, end) << endl;
    cout << "Total Number of Odd Number between  "<< start << " and "<< end << " : " << oddcount(start, end) <<endl;
    cout << "Total Number of Prime Number between  "<< start << " and "<< end << " : " << primecount(start, end) <<endl; // Output the correct count
    return 0;

}