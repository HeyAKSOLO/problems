#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int curr = 0;
        for(int i : nums){
            curr += i;
            res = max(res, curr);
            if(curr < 0) curr = 0;
        }
        return res;
    }
};