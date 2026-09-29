#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> stc;
        for(int i = 0; i < n; i++){
            while(!stc.empty() && temp[i] > temp[stc.top()]){
                int top = stc.top();
                ans[top] = i-top;
                stc.pop();
            }
            stc.push(i);
        }
        return ans;
    }
};