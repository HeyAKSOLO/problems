#include <bits/stdc++.h>
using namespace std;

// Max Consecutive Ones using 
// Sliding window
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int max_o = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                l = i + 1;
            }
            else{
                max_o = max(max_o, i - l + 1);
            }
        }
        return max_o;
    }
};

// normal approach
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int max_o = 0;
        for(int i : nums){
            if(i == 1) l++;
            else{
                l = 0;
            }
            max_o = max(max_o, l);
        }
        return max_o;
    }
};
