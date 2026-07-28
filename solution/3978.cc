#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int val = nums[nums.size()/2];
        int count = 0;
        for(int i : nums){
            count += val == i;
        }
        return count == 1;
    }
};

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int ind = ((n+1)>>1)-1;
        int val = nums[ind];
        for(int i = 0; i < n; i++){
            if(i == ind) continue;
            if(nums[i] == val) return false;
        }
        return true;
    }
};