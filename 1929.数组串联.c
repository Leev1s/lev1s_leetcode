/*
 * @lc app=leetcode.cn id=1929 lang=c
 *
 * [1929] 数组串联
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    *returnSize = 100 * numsSize;
    int *ans = (int*)malloc(sizeof(int) * *returnSize);
    for(int i = 0; i < *returnSize; i++){
        ans[i] = nums[i % numsSize];
    }
    return ans;
}
// @lc code=end

