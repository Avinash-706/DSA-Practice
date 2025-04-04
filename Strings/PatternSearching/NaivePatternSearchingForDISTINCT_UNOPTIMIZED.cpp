#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//NOTE         : Given a pattern with distinct characters.
//UNOPTIMIZED  : but still more optimized than previous one
void patSearchinng(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();

    if(n < m){
        cout << -1 << endl;
        return;
    }

    for(int i = 0 ; i <= (n - m);  ){
        int j;
        for(j = 0 ; j < m ; j++)    if(pat[j] != txt[i + j])    break;

        if(j == m)    cout << i << "  ";
        if(j == 0)    i++;
        else          i=(i+j);
    }
}
 
int main() 
{ 
    string txt = "ABCABCD";
    string pat="ABCD";

    cout<<"All index numbers where pattern found:"<<" ";

    patSearchinng(txt,pat);
    return 0; 
} 

// TIME  COMPLEXITY : O(n), where 'n' is the length of the text.
// SPACE COMPLEXITY : O(1)