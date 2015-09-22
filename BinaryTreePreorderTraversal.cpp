/* Binary Tree Preorder Traversal
https://leetcode.com/problems/binary-tree-preorder-traversal/

Given a binary tree, return the preorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3 */
return [1,2,3].


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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        stack<TreeNode*> node;

        bool done = false;
        if(!root)
            return answer;
        else
        {
            while(!done)
            {

                answer.push_back(root->val);
                if(root->left)
                {
                    node.push(root);
                    root = root->left;
                }
                else
                {
                    if(root->right)
                    {
                        root = root->right;

                    }
                    else
                    {

                        while(!node.empty() && (node.empty() ? false : !node.top()->right ))
                            node.pop();
                        if(node.empty())
                            done = true;
                        else
                        {
                            root = node.top()->right;
                            node.pop();
                        }
                    }
                }
            }
        }
        return answer;
    }
};
