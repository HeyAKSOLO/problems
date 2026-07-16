#include <bits/stdc++.h>
using namespace std;


// Remove Duplicates from sorted list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        ListNode *move = head;
        while(move != nullptr){
            ListNode *curr = move->next;
            while(curr != nullptr && move->val == curr->val){
                move->next = curr->next;
                delete curr;
                curr = move->next;
            }
            move = move->next;
        }
        return head;
    }
};