//Question Link: https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int key;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == nums[i+1])
                key = nums[i];
        }
        return key;
    }
};
