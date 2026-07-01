#include <bits\stdc++.h>
using namespace std;

// Missing Number (using bit manipulation)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for(int i : nums){
            ans ^= i;
        }
        for(int i = 0; i <= nums.size(); i++){
            ans ^= i;
        }
        return ans;
    }
};