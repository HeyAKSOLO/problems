#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int n1 = s.length();
        int n2 = t.length();
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(s[i] == t[j]){
                count++; i++;
            }
            j++;
        }
        return n1 == count;
    }
};