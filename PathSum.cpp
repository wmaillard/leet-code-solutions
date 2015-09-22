/* Path Sum
https://leetcode.com/problems/path-sum/

Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

For example:
Given the below binary tree and sum = 22,
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22. */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        TreeNode* cur = root;
        stack<TreeNode*> checkedLeft;
        stack<int> oldSum;
        while(cur)
        {
            if ((cur->val - sum == 0) && !cur->left && !cur->right)
                return true;
            else if(cur->left || cur->right)
            {
                sum -= cur->val;
                if(cur->left)
                {
                    if(cur->right)
                    {
                        checkedLeft.push(cur->right);
                        oldSum.push(sum);
                        
                    }
                    cur = cur->left;
                }
                else
                    cur = cur->right;
            }
            else
            {
                if(!checkedLeft.empty())
                {  
                    cur = checkedLeft.top();
                    checkedLeft.pop();
                    sum = oldSum.top();
                    oldSum.pop();
                }
                else
                    return false;
            }
        }
        return false;
    }
};