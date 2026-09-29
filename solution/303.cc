#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> prefix_sum;
    NumArray(vector<int>& nums) {
        vector<int> ref(nums.size()+1);
        for(int i = 1; i < ref.size(); i++) ref[i] = nums[i-1] + ref[i-1];
        prefix_sum = ref;   
    }
    int sumRange(int left, int right) {
        return prefix_sum[right+1]-prefix_sum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */