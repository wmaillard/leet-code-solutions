/* Find Minimum in Rotated Sorted Array
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array. */

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
            
        int last, first, mid;
        first = 0;
        last = nums.size() - 1;
        
        if(nums[last] > nums[first])
            return nums[first];
            
        mid = nums.size() / 2;
        while (mid != last && mid != first)
        {
        if(nums[mid] < nums[first])
        {
            last = mid;
            mid = first + (mid - first) / 2;
        }
        else
        {
            first = mid;
            mid = mid + (last - mid) / 2;
        }
        }
        if(nums[last] < nums[first]) return nums[last]; 
        else return nums[first];
        
       
    }
};