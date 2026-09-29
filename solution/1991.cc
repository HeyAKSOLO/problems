#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        for(int i : nums) total += i;
        int ps = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ps == total - (nums[i] + ps)) return i;
            ps += nums[i];
        }
        return -1;
    }
};