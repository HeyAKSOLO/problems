#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        string ans;
        for(char i : s){
            if(!ans.empty() && (ans.back() == i+32 || ans.back() == i-32)) ans.pop_back();
            else ans.push_back(i);
        }
        return ans;
    }
};