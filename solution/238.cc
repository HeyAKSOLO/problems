#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int prod = 1;
        for(int i : nums){
            prod *= i;
            res.push_back(prod);
        } 
        for(int i = n-1; i >= 0; i--){
            
        }
        return res;

    }
};