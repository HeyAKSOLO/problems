#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;

        while(l < h){
            int mid = l + (h - l)/2;
// from single element, for all the previous elements a[i] == a[i-1] if i is odd and a[i] == a[i + 1] if i is even because the single element disrupts this pattern 
            if(( (mid & 1) && nums[mid] == nums[mid - 1]) || ( !(mid & 1) && nums[mid] == nums[mid + 1])) l = mid + 1;
            else h = mid;
        }
        return nums[h];
    }
};