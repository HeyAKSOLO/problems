#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> st;
        int target_index = 0;
        for(int i = 1; i <= n && target_index < target.size(); i++){
            st.push_back("Push");
            if(i == target[target_index]) target_index++;
            else st.push_back("Pop");
        }
        return st;
    }
};