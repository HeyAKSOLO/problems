#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans = prices;
        stack<int> stc;
        for(int i = 0; i < prices.size(); i++){
            while(!stc.empty() && prices[stc.top()] >= prices[i]){
                ans[stc.top()] = prices[stc.top()]-prices[i];
                stc.pop();
            }
            stc.push(i);
        }
        return ans;
    }
};