/*
 * @lc app=leetcode.cn id=2114 lang=c
 *
 * [2114] 句子中的最多单词数
 */

// @lc code=start


int mostWordsFound(char ** sentences, int sentencesSize){
    int max = 0;
    int ans = 0;
    for(int i = 0; i < sentencesSize; i++){
        int j = 0;
        int sum = 0;
        int maxWord = 0;
        while(sentences[i][j] != '\0'){
            sum += sentences[i][j] != ' ' ? 1 : 0;
            if(isalpha(sentences[i][j]))
            maxWord = sentences[i][j] = ' ' && maxWord > sum ? maxWord : sum;
            j++;
        }
        if(maxWord > max){
            max = maxWord;
            ans = i;
        }
    }
    return ans;
}
// @lc code=end

