/* Invert Binary Tree
https://leetcode.com/problems/invert-binary-tree/



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
    TreeNode* invertTree(TreeNode* root) {

        helper(root);

        return root;

        

        

    }

    void helper(TreeNode* root){

        if(root)

        {

            TreeNode* temp = root->left;

            root->left = root->right;

            root->right = temp;

            helper(root->right);

            helper(root->left);

        }

    }

};