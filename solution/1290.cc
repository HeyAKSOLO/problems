#include <bits/stdc++.h>
using namespace std;

// convert-binary-number-in-a-linked-list-to-integer

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
    int bin_to_int(vector<int> &x){
        int n = x.size();
        int val = 0;
        int j = n-1;
        while(j >= 0){
            val += x[j] * 1 << n - (j+1);
            j--;
        }
        return val;
    }
    int getDecimalValue(ListNode* head) {
        vector<int> x;
        while(head != nullptr){
            x.push_back(head->val);
            head = head -> next;
        }
        int ans = bin_to_int(x);
        return ans;
    }
};