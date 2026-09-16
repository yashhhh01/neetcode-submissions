/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int differ(TreeNode* root,int &diff){
        if(root==NULL)
        return 0;

        int leftheight = differ(root->left,diff);
        int rightheight= differ(root->right,diff);
             diff=max(diff,abs(leftheight-rightheight));

             return 1+max(leftheight,rightheight);
    }
    bool isBalanced(TreeNode* root) {
        int diff=0;
        differ(root,diff);
        if(diff>1)
        return false;
        return true;
    }
};
