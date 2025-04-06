#include <bits/stdc++.h> 
using namespace std; 

int longPropPreSuff(string str, int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
                
        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS(string str, int *lps){
    for(int i=0;i<str.length();i++){
        lps[i]=longPropPreSuff(str,i+1);
    }
}
 
int main() 
{ 
    string txt = "ababc";
    int lps[txt.length()];
    fillLPS(txt,lps);
    for(int i=0;i<txt.length();i++){
        cout<<lps[i]<<" ";
    }
    
    return 0; 
} 

// TIME  COMPLEXITY : O(n³), where 'n' is the length of the string
// SPACE COMPLEXITY : O(n)