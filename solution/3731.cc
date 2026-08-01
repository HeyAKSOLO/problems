#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minn = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        vector<int> vec;
        for(int i = minn; i <= max-minn; i++){
            if(find(nums.begin(), nums.end(), i) == nums.end()) vec.push_back(i);
        }
        return vec;
    }
};