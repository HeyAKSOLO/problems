#include <bits/stdc++.h>
using namespace std;

// Maximum Average Subarray I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int start = 0; start < k; start++){
            sum += nums[start];
        }
        int maxm = sum;
        for(int i = k; i < nums.size(); i++){
            sum += nums[i] - nums[i-k];
            maxm = max(maxm, sum);
        }
        return (double)maxm / k;
    }
};