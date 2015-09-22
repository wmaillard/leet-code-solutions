/* Contains Duplicate II
https://leetcode.com/problems/contains-duplicate-ii/

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array 
such that nums[i] = nums[j] and the difference between i and j is at most k. */


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> thing;
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            
            if(thing.count(nums[i]))
                if(i - k > 0)
                {
                for(int j = i - k; j < i; j++)
                    {
                        if (nums[j] == nums[i])
                            return true;
                    }
                }
                else
                {
                for(int j = 0; j < i; j++)
                    {
                        if (nums[j] == nums[i])
                            return true;
                    }
                }
            thing.insert(nums[i]);
            
            }
            return false;
        }
        
    };