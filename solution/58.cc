#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.length();
        while(i && !isalpha(s[i-1])) i--;
        int st = i;
        while(i && isalpha(s[i-1])) i--;
        return st-i;
    }
};