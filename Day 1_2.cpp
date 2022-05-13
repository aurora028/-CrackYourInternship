//Question Link: https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red = 0, white = 0, blue = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                red++;
            else if(nums[i] == 1)
                white++;
            else
                blue++;
        }

        vector<int> ans;
        while(red--)
            ans.push_back(0);
        while(white--)
            ans.push_back(1);
        while(blue--)
            ans.push_back(2);

        nums = ans;
    }
};