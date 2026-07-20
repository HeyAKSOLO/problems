#include <bits/stdc++.h>
using namespace std;

// Reverse LL
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
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