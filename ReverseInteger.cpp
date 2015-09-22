/* Reverse Integer
https://leetcode.com/problems/reverse-integer/

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
 */
 
class Solution
{
public:
        int reverse(int x) {
        int digits = log10(abs(x)) + 1;
        int initDigits = digits;
        int temp;
        long long answer = 0;
        queue<int> thing;

        for(int i = 0; i < digits; i++)
            {
                temp = x % 10;
                x /= 10;
                thing.push(temp);

            }
        digits = initDigits;
        for(int i = 0; i < digits; i++)
        {

            answer *= 10;
            answer += thing.front();
            thing.pop();
        }
        if(answer > 2147483647 || answer < -2147483644)
            return 0;
        return answer;
        }


    };

