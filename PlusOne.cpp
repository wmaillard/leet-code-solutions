/* Plus One
https://leetcode.com/problems/plus-one/

Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list. */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        
        return thing(digits, i);
    }
    vector<int> thing(vector<int>& digits, int i){
        
        
        if(i < 0)
            digits.insert(digits.begin(), 1);
        
        else 
        {
            digits[i]++;
            if(digits[i] > 9)
            {digits[i] = 0;
            i--;
            thing(digits, i);}
        }
        return digits;
    }
};