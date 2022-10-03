/*
 * @lc app=leetcode.cn id=2413 lang=c
 *
 * [2413] 最小偶倍数
 */

// @lc code=start


int smallestEvenMultiple(int n){
    if (n % 2 == 0){
        return n;
    }
    else{
        return 2 * n;
    }
}
// @lc code=end

