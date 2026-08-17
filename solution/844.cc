#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string fr;
        string sr;
        for(char i : s){
            if(i == '#'){
                if(!fr.empty()) fr.pop_back();
            } 
            else fr += i;
        }
        for(char j : t){
            if(j == '#'){
                if(!sr.empty()) sr.pop_back();
            }
            else sr += j;
        }
        return fr == sr;
    }
};
