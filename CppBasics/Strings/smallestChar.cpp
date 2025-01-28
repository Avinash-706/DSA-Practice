#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include <strings.h>

using namespace std;

char smallest_Char(string str){
    char smallest=str[0];
    for(int i=1; i < str.length(); i++){
        if(smallest>str[i]){
            smallest=str[i];
        }
    }
    return smallest;

}
int length(string &str){
    int len=0;
    while(str[len]!='\0'){ // or while(str[len]){}
        len++;
    }
    return len;
}



void  input(string &str){
    cout<< "\n Enter String: ";
    getline(cin, str);
    cout << "Length of the string: "<< length(str) << endl;

}

int main() {
    string str;
    cout<<str.length()<<endl;
    input(str);
    cout << "Smallest Character: " << smallest_Char(str);
    return 0;
}