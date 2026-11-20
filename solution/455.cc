#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = min(g.size(), s.size());
        int res = 0;
        int i = 0, k = 0;
        while(i < s.size() && k < g.size()){
            if(s[i] >= g[k]){
                res++;
                i++; k++;
            }
            else i++;
        }
        return res;
    }
};