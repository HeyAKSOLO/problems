#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int count = 0;
        for(int i : nums){
            if(mpp.count(i)){
                count += mpp[i];
            }
            mpp[i]++;
        }
        return count;
    }
};