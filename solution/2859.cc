#include <bits/stdc++.h>
using namespace std;

// sum-of-values-at-indices-with-k-set-bits
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            if(__builtin_popcount(i) == k) total += nums[i];
        }
        return total;
    }
};