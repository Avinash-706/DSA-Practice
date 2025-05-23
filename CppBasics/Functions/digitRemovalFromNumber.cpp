#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int reverse(int num){
    int result=0;
    while(num > 0){
        int digit=num % 10;
        result=result * 10 + digit;
        num=num/10; 
    }
    return result;
}

int removeDigit(int num, int userChoice){
    int result=0;
    while(num > 0){
        int digit = num % 10;
        if(digit!=userChoice){
            result = (result * 10) + digit;
        }
        num = num / 10;
    }
    return reverse(result);
}

int main() {
    int num;
    cout<<"Enter a Desired Number: ";
    cin >> num;
    bool itterations=true;
    while(itterations){
        int userChoice;
        cin >> userChoice;

        num = removeDigit(num, userChoice);
        cout << "RESULT: " << num << endl;
        if(num>0){
        char permission;
        cout << "Wanna continue with the program(Y/N): " << endl;
        cin >> permission;
        if(permission == 'Y') itterations = true;
        else itterations = false;
        }
        else itterations=false;
    }
    
    return 0;
}


// k --> Number of Iterations,  d --> Number of Digits in the Number
// Time Complexity: O(k * d), where k is the number of iterations and d is the number of digits in the number.
// Space Complexity: O(d) in the worst case for the result in removeDigit, but O(1) for the other variables.