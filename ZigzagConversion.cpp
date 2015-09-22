/* ZigZag Conversion
https://leetcode.com/problems/zigzag-conversion/

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
 */
class Solution
{
public:
        string convert(string s, int numRows) {
        string answer;
        int iRows= numRows;
        string::iterator i = s.begin();
        string::iterator lastErase = s.begin();
        int count = 0;
        if (numRows == 1)
            return s;
        while(2*numRows-3 > -1)
        {
        while(i < s.end())
        {
            if(!count || numRows == iRows)
            {
                answer+= *i;
                s.erase(i);
                lastErase = i;
                count = 1;
            }
            else
            {
                answer+= *i;
                s.erase(i);
                lastErase = i;
                if(i != s.end())
                {
                    answer += *i;
                    s.erase(i);
                    lastErase = i;
                }
            }
            
            i+=2*numRows-3;


        }
        numRows--;
        count = 0;
        i = lastErase = s.begin();
        }
        answer += s;
        return answer;
        }
        Solution(){};

    };



