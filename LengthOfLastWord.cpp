/* Length of Last Word
https://leetcode.com/problems/length-of-last-word/

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(!s.size())
            return 0;
        string::iterator i = s.end();
        string::iterator theEnd = i;
        theEnd--;
        while(*theEnd == ' ')
        {   if(theEnd == s.begin())
                return 0;
            theEnd--;
        }
        i = theEnd;
        while(*i != ' ')
        {
            if(i == s.begin())
                return distance(i, theEnd) + 1;
            i--;
          
        }
        return distance(i, theEnd);
    }
};