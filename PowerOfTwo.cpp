//Power of Two
//https://leetcode.com/problems/power-of-two/

//Given an integer, write a function to determine if it is a power of two.

//The obvious way to do it

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1)
            return false;
        else if(n == 1)
            return true;
        else
        {
        int mod = 0;
        while(!mod && n > 1)
        {
            mod = n % 2;
            n = n / 2;
            
        }
        if (mod)
            return false;
        else
            return true;
        }
        
    }
};

//Using a bitwise AND (not my idea but very cool)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
        {
            return false;
        }
        n &= (n - 1);
        return n == 0;
        
    }
};
