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
        int k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[k-1]==val){
                nums[k-1]=nums[i];
                k++;
            }
        }
        return k;
    }
};
// @lc code=end

