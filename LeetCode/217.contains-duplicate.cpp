/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start

#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> Count;
        for(int i: nums){
            Count[i]++;
        }
        for(const auto& i : Count){
            if(i.second > 2) return true;
            else return false;
        }
    }
};
// @lc code=end

