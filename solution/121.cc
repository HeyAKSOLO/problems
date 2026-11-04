#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minr = INT_MAX;
        int max_pft = 0;
        for(int i : prices){
            minr = (i < minr) ? i : minr;
            max_pft = max(i-minr, max_pft);
        }
        return max_pft;
    }
};