#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        int res = nums[0];
        while(l <= h){
            int mid = l + (h - l)/2;
            if(nums[l] <= nums[mid]){
                res = (nums[l] < res) ? nums[l] : res;
                l = mid + 1;
            }
            else{
                res = (nums[mid] < res) ? nums[mid] : res;
                h = mid - 1;
            }
        }
        return res;
    }
};