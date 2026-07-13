#include <bits/stdc++.h>
using namespace std;

// Find the difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int eor = 0;
        for(char i : s) eor ^= i;
        for(char y : t) eor ^= y;
        return eor;
    }
};