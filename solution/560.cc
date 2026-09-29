#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int tot = 0;
        int l = 0;
        for(int i = 0; i < nums.size(); i++){
            tot += nums[i];
            if(tot == k){
                count++;
                continue;
            }
            while(l < i && tot > k){
                tot -= nums[l];
                l++;
                if(tot == k) count++;
            }
        }
        return count;
    }
};