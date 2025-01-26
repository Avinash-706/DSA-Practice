/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start

#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> ranges;
        if (nums.empty()) return ranges;
        int start = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 == nums.size() || nums[i + 1] != nums[i] + 1) {
                if (start == i) {
                    ranges.push_back(to_string(nums[start]));
                } else {
                    ranges.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
                }
                start = i + 1;
            }
        }
        return ranges;
    }
};
// @lc code=end

