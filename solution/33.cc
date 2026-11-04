#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int k) {
        int l = 0;
        int h = nums.size() - 1;
        while(l <= h){
            int mid = l + (h - l)/2;
            if(nums[mid] == k) return mid;
            else if(nums[mid] >= nums[l]){
                if(k < nums[mid] && k >= nums[l]) h = mid - 1;
                else l = mid + 1;
            }
            else{
                if(k > nums[mid] && k <= nums[h]) l = mid + 1;
                else h = mid - 1;
            }
        }
        return -1;
    }
};