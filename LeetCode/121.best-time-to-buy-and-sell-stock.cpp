/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //approach 1 UNOPTIMIZED BRUTE FORCE - O(n^2)
        // int max=0;
        // for(int i=0; i<prices.size(); i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         if(prices[j] > prices[i]){
        //             int check=prices[j]-prices[i];
        //             if(check>max){
        //                 max = check;
        //             }
        //         }
        //     }
        // }
        // return max;


        //approach 2 - O(n)
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i : prices){
            min_price = min(min_price, i); 
            max_profit = max(max_profit, i - min_price);        
        }        
        return max_profit;
    }
};
// @lc code=end

