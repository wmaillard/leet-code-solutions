//Valid Anagram

//https://leetcode.com/problems/valid-anagram/


/* Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets */

//Just count the number of each specific letter in the words,
//if the count matches then they are anagrams

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
       vector<int> listOne(26, 0);
       vector<int> listTwo(26, 0);
       for(int i = 0; i < s.size(); i++)
       { 
           listOne.at(s.at(i) - 'a')++;
       }
       for(int i = 0; i < s.size(); i++)
       { 
           listTwo.at(t.at(i) - 'a')++;
       }
       return listOne == listTwo;
}};