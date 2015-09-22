/* Reverse Linked List
https://leetcode.com/problems/reverse-linked-list/

Reverse a singly linked list. */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = NULL;
        ListNode* nextOne = head;
        while(nextOne)
        {
            nextOne = head->next;
            head->next = temp;
            temp = head;
            head = nextOne;
            
        }
        return temp;
        
    }
};