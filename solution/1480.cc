#include <bits/stdc++.h>
using namespace std;

// Running sum of 1d array
vector<int> runningSum(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++){
        nums[i] += nums[i-1];
    }
    return nums;
}