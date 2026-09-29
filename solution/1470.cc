#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int sz = nums.size();
        vector<int> ans(sz);
        int j = n;
        int k = 0;
        for(int i = 0; i < n && j < sz; i++){
            ans[k++] = nums[i];
            ans[k++] = nums[j++];
        }
        return ans;
    }
};