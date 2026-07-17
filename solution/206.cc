#include <bits/stdc++.h>
using namespace std;

// Reverse LL
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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode *next = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = nullptr;
        return next;
    }
};
// if(head == nullptr) to check if a LL is empty return the nullptr