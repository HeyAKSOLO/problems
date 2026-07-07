#include <iostream>
using namespace std;

// Minimum size subarray sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l, total;
        l = total = 0;
        int min_l = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
            while(l <= i && total >= target){
                min_l = min(min_l, i - l + 1);
                total -= nums[l];
                l++;
            }
        }
        return (min_l == INT_MAX) ? 0 : min_l;
    }
};