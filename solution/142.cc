#include <bits/stdc++.h>
using namespace std;

// Linked List Cycle
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head, *current;
        while(fast && fast->next && fast->next->next){ // first while condition for detecting cycle
            fast=fast->next->next;
            slow=slow->next;

            if (fast==slow) { // for finding the node where cycle beginsf
                current= head;
                while(current!=fast){
                    current=current->next;
                    fast=fast->next;
                }
                return current;
            }
            }
            return nullptr;
            }
};