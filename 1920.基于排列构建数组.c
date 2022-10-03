/*
 * @lc app=leetcode.cn id=1920 lang=c
 *
 * [1920] 基于排列构建数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    int *ans = (int*)malloc(sizeof(int) * numsSize);
    for(int idx = 0; idx < numsSize; idx++){
        ans[idx] = nums[nums[idx]];
    }
    *returnSize = numsSize;
    return ans;
}
// @lc code=end

