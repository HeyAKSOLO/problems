#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// use fast and slow pointer
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        ListNode* jump = curr;
        while(jump != nullptr && jump->next != nullptr){
            jump = jump->next->next;
            curr = curr->next;
        }
        return curr;
    }
};