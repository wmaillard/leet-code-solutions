/* Excel Sheet Column Title
https://leetcode.com/problems/excel-sheet-column-title/

 Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB  */ 

class Solution {
public:
    string convertToTitle(int n) {
		string column = "";
		while (n)
		{
			column.insert(column.begin(),  (n-1) % 26 + 65);
			n = (n - 1) / 26;
		}
		return column;
        
    }
};