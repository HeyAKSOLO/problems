#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total = 0;
        for(int i : nums) total += i;
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            total -= temp;
            if(left == total) return i;
            left += temp;
        }
        return -1;
    }
};
