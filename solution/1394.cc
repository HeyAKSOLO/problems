#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for(int i : arr) mpp[i]++;
        int res = -1;
        for(auto i : mpp){
            res = ((i.first == i.second) ? max(res, i.first) : res);
        }
        return res;
    }
};