#include <bits/stdc++.h>
using namespace std;

// Remove Linked List Elements

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while(curr != nullptr){
            if(curr->val == val){
                if(prev == nullptr){
                head = head->next;
                delete curr;
                curr = head;
                continue;
                }
                prev->next = curr->next;
                ListNode *next = curr->next;
                delete curr;
                curr = next;
                continue;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};