#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        // 48 = '0'
        // can use substr function
        int end = -1;
        for(int i = num.size()-1; i >= 0; i--){
            if((num[i]-48)&1){
                end = i;
                break;
            }
        }
        string res = "";
        for(int i = 0; i <= end; i++) res += num[i];
        return res;
    }
};