#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(int i = 0; i < accounts.size(); i++){
            int loc = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                loc += accounts[i][j];
            }
            res = max(res, loc);
        }
        return res;
    }
};