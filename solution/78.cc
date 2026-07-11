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

// better
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        int total = 1 << nums.size();

        for(int mask = 0; mask < total; mask++){

            vector<int> subset;

            for(int j = 0; j < nums.size(); j++){

                if(mask & (1 << j))
                    subset.push_back(nums[j]);
            }

            ans.push_back(subset);
        }

        return ans;
    }
};