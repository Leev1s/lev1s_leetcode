/*
 * @lc app=leetcode.cn id=1672 lang=c
 *
 * [1672] 最富有客户的资产总量
 */

// @lc code=start


int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int ColSize = accountsColSize[0];
    int Max = 0;
    for(int i = 0; i < accountsSize; i++){
        int sum = 0;
        for(int j = 0; j < ColSize; j++){
            sum += accounts[i][j];
        }
        Max = Max > sum ? Max : sum;
    }
    return Max;
}
// @lc code=end

