/* Summary Ranges
https://leetcode.com/problems/summary-ranges/
Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"]. */

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i = 0;
        int j, k;
        vector<string> Ran;
        while(i < nums.size())
        {
            j = k = nums[i];
            while(nums[i] == j && i < nums.size())
            {
                j = nums[i] + 1;
                i++;
            }
            j--;
            if(j == k)
                Ran.push_back(to_string(j));
            else
                Ran.push_back(to_string(k) + "->" + to_string(j));
        }
        return Ran;
        
    }
};