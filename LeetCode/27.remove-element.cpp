/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //approach 1 - NON-OPTIMIZED
        // vector<int> temp;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != val) {
        //         temp.push_back(nums[i]); 
        //     }
        // }
        // nums = temp; 
        // return temp.size(); 

        //approach 2 - OPTIMIZED
        int k=0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
// @lc code=end

