#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool is_vov(char w){
        char c = tolower(w);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.length();
        int half = n/2;
        int happyc = 0;
        for(int i = 0; i < n; i++){
            if(i >= half && is_vov(s[i])) happyc--;
            else if(i < half && is_vov(s[i])) happyc++;
        }
        return happyc == 0;
    }
};