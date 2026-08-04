#include <bits/stdc++.h>
using namespace std;

// Valid Parenthesis using stack
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char i : s){
            if(i == '(' || i == '{' || i == '[') st.push(i);
            else if(i == ')' || i == '}' || i == ']'){
                if(st.empty()) return false;
                char topel = st.top();
                st.pop();
                if(i == ')' && topel != '(') return false;
                if(i == ']' && topel != '[') return false;
                if(i == '}' && topel != '{') return false;
            }
        }
        return st.empty();
    }
};