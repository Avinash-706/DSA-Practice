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
        vector<int> temp;
        for(int i=0; i<temp.size(); i++){
            if(nums[i]!=val){
                // temp.push_back(nums[i]);
                temp[i]=nums[i];
            }
        }
        nums=temp;
        int k=temp.size();
        return k;

    }
};
// @lc code=end

