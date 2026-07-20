#include <bits/stdc++.h>
using namespace std;


// Remove Duplicates from sorted list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
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