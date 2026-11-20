#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int res = 0;
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) res += nums[i];
            else if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) res -= nums[i];
        }
        return res;
    }
};