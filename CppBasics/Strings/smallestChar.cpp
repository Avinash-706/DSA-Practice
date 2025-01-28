#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include <strings.h>
using namespace std;

int countChar(string str, char n){
    int count=0;
    for(int i=0; i<str.length(); i++) if(str[i] == n)  count++;
    return count;
}

int smallest_Char(string str){
    char smallest=str[0];
    int index=0;
    for(int i=1; i < str.length(); i++){
        if(smallest>str[i] && str[i]!=' '){ //removing spaces from string
            smallest=str[i];
            index=i;
        }
    }
    return index;
}


int largest_Char(string str){
    char largest=str[0];
    int index=0;
    for(int i=1; i < str.length(); i++){
        if(largest<str[i]){
            largest=str[i];
            index=i;
        }
    }
    return index;
}


int length(string &str){
    int len=0;
    while(str[len]!='\0'){ // or while(str[len]){}
        len++;
    }
    return len;
}


void  input(string &str){
    cout<< "\nEnter String: ";
    getline(cin, str);
    cout << "Length of the string: "<< length(str) << endl;
}

int main() {
    string str;
    input(str);
    cout << "Smallest Character: " << str[smallest_Char(str)] << endl;
    cout << "ASCII value of Smallest Character: " << int(str[smallest_Char(str)]) <<endl;
    cout << "Largest Character: " << str[largest_Char(str)] << endl;
    cout << "ASCII value of Largest Character: " << int(str[largest_Char(str)]) << endl;
    char countOccurences;
    cout << "Enter the character to find the occurences: ";
    cin >> countOccurences;
    cout << "Count of " << countOccurences <<" Character: " << countChar(str, countOccurences) << endl;
    return 0;
}