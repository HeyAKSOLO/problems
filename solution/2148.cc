#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        int sml = INT_MAX;
        int lar = INT_MIN;
        for(int i : nums){
            if(i < sml) sml = i;
            if(i > lar) lar = i;
        }
        int res = 0;
        for(int i : nums){
            if(i == sml || i == lar) continue;
            if(i > sml && i < lar) res++;
        }
        return res;

    }
};  