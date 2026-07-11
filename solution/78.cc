#include <bits/stdc++.h>
using namespace std;

// Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = pow(2 , nums.size());
        for(int i = 0; i < n; i++){
            int bits = i;
            vector<int> subs;
            int pos = 0;
            while(bits != 0){
                if(1 & bits){
                    subs.push_back(nums[pos]);
                }
                bits >>= 1;
                pos++;
            }
            ans.push_back(subs);
        }
        return ans;
    }
};