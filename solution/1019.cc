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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> stc;
        vector<int> hd;
        while(head){
            hd.push_back(head->val);
            head = head->next;
        }
        vector<int> ans(hd.size(), 0);
        for(int i = 0; i < hd.size(); i++){
            while(!stc.empty() && hd[i] > hd[stc.top()]){
                ans[stc.top()] = hd[i];
                stc.pop();
            }
            stc.push(i);
        }
        return ans;
    }
};