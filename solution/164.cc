#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void radix(vector<int> &nums, int exp){
        vector<int> freq(10);
        int n = nums.size();
        for(int i : nums) freq[i / exp % 10]++;
        for(int i = 1; i < 10; i++) freq[i] += freq[i-1];

        vector<int> output(n);
        for(int i = n-1; i >= 0; i--){
            int elm = nums[i] / exp % 10;
            output[freq[elm]-1] = nums[i];
            freq[elm]--;
        }
        for(int i = 0; i < n; i++) nums[i] = output[i];
    }
    int maximumGap(vector<int>& nums) {
        if(nums.size() <= 1) return 0;
        int max_diff = 0;
        int maxel = *max_element(nums.begin(), nums.end());
        for(long long exp = 1; maxel / exp > 0; exp *= 10){
            radix(nums, exp);
        }
        for(int i = 1; i < nums.size(); i++) max_diff = max(max_diff, nums[i] - nums[i - 1]);
        return max_diff;
    }
};