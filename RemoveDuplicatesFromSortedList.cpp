/* Remove Duplicates from Sorted List
https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
 */
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* garbage = NULL;
        while(temp){
            while(temp->next && (temp->val == temp->next->val)){
                garbage = temp->next;
                temp->next = temp->next->next;
                delete garbage;
            }
            temp = temp->next;
        }
        return head;
    }
};