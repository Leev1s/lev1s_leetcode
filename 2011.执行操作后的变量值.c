/*
 * @lc app=leetcode.cn id=2011 lang=c
 *
 * [2011] 执行操作后的变量值
 */

// @lc code=start


int finalValueAfterOperations(char ** operations, int operationsSize){
    int x = 0;
    for(int i = 0; i < operationsSize; i++){
        x += operations[i][1] == '+' ? 1 : -1;
    }
    return x;
}
// @lc code=end

