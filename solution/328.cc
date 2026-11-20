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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *ods = head;
        ListNode *evs = head->next;
        ListNode *conect_evs = head->next;
        
        while(ods->next && ods->next->next){ // Change the loop condition to while(evs && evs->next) for clarity
            ods->next = evs->next;
            evs->next = evs->next->next;

            ods = ods->next;
            evs = evs->next;
        }

        ods->next = conect_evs;
        return head;
    }
};