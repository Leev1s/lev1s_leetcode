/*
 * @lc app=leetcode.cn id=2236 lang=c
 *
 * [2236] 判断根结点是否等于子结点之和
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


bool checkTree(struct TreeNode* root){
    return root->left->val + root->right->val == root->val;
}
// @lc code=end

