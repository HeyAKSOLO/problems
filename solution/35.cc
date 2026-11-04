#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int l = 0;
        int r = nums.size()-1;
        while(l < r){
            int mid = l+(r-l)/2;
            if(k > nums[mid]) l = mid+1;
            else if(k < nums[mid]) r = mid-1;
            else return mid;
        }
        if(k > nums[l]) return ++l;
        else return l;
    }
};