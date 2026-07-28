#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// done using hash table, try to do using stack
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodes;
        ListNode *first = headA;
        ListNode *second = headB;
        while(first != nullptr){
            nodes.insert(first);
            first = first -> next;
        } 
        while(second != nullptr){
            if(nodes.count(second)) return second;
            second = second -> next;
        }
        return nullptr;
    }
};