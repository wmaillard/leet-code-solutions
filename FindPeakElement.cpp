/* Find Peak Element
https://leetcode.com/problems/find-peak-element/

A peak element is an element that is greater than its neighbors.

Given an input array where num[i] ≠ num[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that num[-1] = num[n] = -∞.

For example, in array [1, 2, 3, 1], 3 is a peak element and your function should return the index number 2. */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(!nums.size() || nums.size() == 1 || nums[0] > nums [1])
            return 0;
        else
        {
            int i = 1;
            while((nums[i] < nums[i+1] || nums[i] < nums[i+1]) && nums.size() - 1 > i)
                i++;
            if(nums.size() - 1 == i - 2)
                if(nums[nums.size() - 1] > nums[nums.size() -2])
                    return nums.size() - 1;
            return i;
        }
        
    }
};