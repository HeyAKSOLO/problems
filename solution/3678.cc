#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int smallestAbsent(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int n = nums.size();
        int avg = accumulate(nums.begin(), nums.end(),0) / n;
        int str = max(avg + 1, 1);
        while(st.count(str)){
            str++;
        }
        return str;
    }
};