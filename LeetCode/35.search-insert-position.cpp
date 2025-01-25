/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;

        //approach 1
        while(left <= right){
            if(nums[left] == target) return left;
            else if(nums[right] == target) return right;
            if(nums[left] < target) left++;
            if(nums[right] > target) right--;
        }
        return left;

        //approach 2
        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //     if (nums[mid] == target)
        //         return mid;
        //     else if (nums[mid] < target)
        //         left = mid + 1; 
        //     else
        //         right = mid - 1;
        // }
        // return left;
    }
};
// @lc code=end

