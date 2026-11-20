#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int n = 0;
        ListNode *p = head;
        while(p){
            n++;
            p = p->next;
        }
        for(int i = 0; i < k % n; i++){
            ListNode *p = nullptr;
            ListNode *curr = head;
            while(curr->next != nullptr){
                p = curr;
                curr = curr->next;
            }
            curr->next = head;
            p->next = nullptr;
            head = curr;
        }
        return head;
    }
};