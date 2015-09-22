/* Merge Two Sorted Lists
https://leetcode.com/problems/merge-two-sorted-lists/

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists. */

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *theCNode, *theLNode, *theRNode;
        ListNode *theHead;
        if(!l1)
            return l2;
        else if (!l2)
            return l1;
        if(l1->val > l2->val)
        {
            theHead = theCNode = l2;
            theRNode = l2->next;
            theLNode = l1;
            
        }
        else
        {
            theHead = theCNode = l1;
            theLNode = l1->next;
            theRNode = l2;
        }   
        while(theLNode && theRNode)
        {
        if(theLNode->val < theRNode->val)
        {
            theCNode->next = theLNode;
            theLNode = theLNode->next;
            theCNode = theCNode->next;
        }
        else
        {
            theCNode->next = theRNode;
            theRNode = theRNode->next;
            theCNode = theCNode->next;
        }
        
        }
        if(theLNode)
        {
            theCNode->next = theLNode;
        }
        else if(theRNode)
        {
            theCNode->next = theRNode;
        }
        return theHead;
        
    }
};