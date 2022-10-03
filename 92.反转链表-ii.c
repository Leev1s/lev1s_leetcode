/*
 * @lc app=leetcode.cn id=92 lang=c
 *
 * [92] 反转链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    struct ListNode *ghost = malloc(sizeof(struct ListNode));
    ghost->val = -1;
    ghost->next = head;
    struct ListNode *pre = ghost;
    for(int i = 0; i < left - 1; i++){
        pre = pre->next;
    }
    struct ListNode *cur = pre->next;
    struct ListNode *next;
    for(int j = 0; j < right - left ; j++){
        next = cur->next;
        cur->next = next->next;
        next->next = pre ->next;
        pre ->next = next;
    }
    return ghost->next;
}
// @lc code=end

