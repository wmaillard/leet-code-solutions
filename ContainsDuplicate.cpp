/* Contains Duplicate
https://leetcode.com/problems/contains-duplicate/

Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice
in the array, and it should return false if every element is distinct. */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(!nums.size())
            return false;
        unordered_set<int> thing;
        
        for(std::vector<int>::iterator it = nums.begin() ; it != nums.end(); ++it)
        {
            if(!thing.count(*it))
                thing.insert(*it);
            else
                return true;
        }
        return false;
        
    }
};