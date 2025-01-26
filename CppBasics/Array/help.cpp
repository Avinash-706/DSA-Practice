#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    for(int i=1; i<10; i++){
        cout<<i<<endl;
        i++;
    }    
    int start=0;
    int end=5;
    string range = to_string(start) + "->" + to_string(end);
    cout<<range;

    
    return 0;
}