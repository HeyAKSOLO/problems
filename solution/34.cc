#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        int l = 0;
        int h = nums.size() - 1;
        vector<int> res(2, -1);
        while(l <= h){ // start index
            int mid = l + (h - l)/2;
            if(k == nums[mid]){
                res[0] = mid;
                h = mid - 1;
            }
            else if(nums[mid] < k) l = mid + 1;
            else h = mid - 1;
        }
        l = 0, h = nums.size() - 1;
        while(l <= h){ // end index
            int mid = l + (h - l)/2;
            if(k == nums[mid]){
                res[1] = mid;
                l = mid + 1;
            }
            else if(nums[mid] < k) l = mid + 1;
            else h = mid - 1;
        } 
        return res;
    }
};