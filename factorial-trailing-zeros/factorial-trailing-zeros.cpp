/* Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity. */
class Solution {
public:
    int trailingZeroes(int n) {
        int answer = 0;
		while(n /= 5)
		{
		    answer += n;
		}
		return answer;
		    
    }
};