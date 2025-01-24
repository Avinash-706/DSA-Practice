#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
    int max=0;
    for(int i=0; i<prices.size(); i++){
        for(int j=i+1; j<prices.size(); j++){
            if(prices[j] > prices[i]){
                int check=prices[j]-prices[i];
                if(check>max){
                    max = check;
                }
            }
        }
    }
    return max;
}



int main() {
    vector<int> prices={7,1,5,3,6,4};
    
    cout<<float(INT_MAX)<<endl;
    cout<<maxProfit(prices);
    return 0;
}