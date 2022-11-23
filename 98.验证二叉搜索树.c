/*
 * @lc app=leetcode.cn id=98 lang=c
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool test(struct TreeNode* root,struct TreeNode* min,struct TreeNode* max){
    if(!root) return true;
    if(max&&root->val>=max->val) return false;
    if(min&&root->val<=min->val) return false;
    return test(root->left,min,root)&&test(root->right,root,max);
}
bool isValidBST(struct TreeNode* root){
    return test(root,NULL,NULL);
}
// @lc code=end

