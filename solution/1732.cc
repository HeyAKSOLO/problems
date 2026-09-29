#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        int last = 0;
        for(int i : gain){
            last = last + i;
            if(last > res) res = last;
        }
        return res;
    }
};