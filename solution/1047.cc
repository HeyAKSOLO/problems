#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        int top = -1;
        vector<char> st;
        for(char &i : s){
            if(top == -1){
                st.push_back(i);
                top++;
                continue;
            }
            if(i == st[top]){
                st.pop_back();
                top--;
                continue;
            }
            st.push_back(i);
            top++;
        }
        string ans = "";
        for(char &i : st) ans += i;
        return ans;
    }
};