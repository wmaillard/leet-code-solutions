/* Best Time to Buy and Sell Stock II
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like 
(ie, buy one and sell one share of the stock multiple times). 
However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again). */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy, sell, sum;
        sum = 0;
        vector<int>::iterator i = prices.begin();
        while(i != prices.end())
        {
			while(*i > *(i + 1) && i != prices.end() - 1)
			{
				i++;
			}
			buy = *i;
			while(*i < *(i + 1) && i != prices.end() - 1)
			{
				i++;
			}
			sell = *i;
			sum += sell - buy;
			i++;
		}
        return sum;
    }
};