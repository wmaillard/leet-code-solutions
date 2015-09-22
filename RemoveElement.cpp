/* Remove Element
https://leetcode.com/problems/remove-element/

Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(vector<int>::iterator i = nums.begin(); i != nums.end(); ++i)
        {
            if(*i == val)
            {
                vector<int>::iterator k = i;
                i--;
                nums.erase(k);
            }
        }
        return nums.size();
    }
};