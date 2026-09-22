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
    void solve(TreeNode* root , int maxNode,int &count){
        if(root==NULL)
        return;

        if(root->val>=maxNode){
            count++;
            maxNode =root->val;
        }

        solve(root->left,maxNode,count);
        solve(root->right,maxNode,count);
    }
    int goodNodes(TreeNode* root) {
        int count=0;
         solve(root,-101,count);
         return count;
    }
  
};
