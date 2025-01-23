/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[k-1]!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
    
};
// @lc code=end


