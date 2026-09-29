#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int st[26] = {};
        for(char i : s){
            st[i-97]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(st[s[i]-97] == 1) return i;
        }
        return -1;
    }
};