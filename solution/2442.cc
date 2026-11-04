#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int n){
        int res = 0;
        for(; n != 0; n /= 10){
            res = res*10+(n%10);
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int i : nums){
            mpp.insert(i);
            mpp.insert(reverse(i));
        }
        return mpp.size();
    }
};