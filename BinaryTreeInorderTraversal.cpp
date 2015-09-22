/* Binary Tree Inorder Traversal
https://leetcode.com/problems/binary-tree-inorder-traversal/

Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ. */

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
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> it;
    if(!root)
        return it;
    else
    {
        stack<TreeNode*> last;
        last.push(NULL);
        stack<TreeNode*> theS;
        bool found = false;
        bool term = false;
        while(!found)
        {
            if(root->left && !term)
            {
                theS.push(root);
                root = root->left;
                term = false;
            }
            else if(root->right)
            {
                it.push_back(root->val);
                root = root->right;
                term = false;
            }
            else
            {
                it.push_back(root->val);
                if(theS.empty())
                    found = true;
                else
                {
                    term = true;
                    root = theS.top();
                    theS.pop();
                }
                
            }
        }
        return it;
    }
}
};