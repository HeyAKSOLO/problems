#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int total = 0;
        for(string i : operations){
            if(i == "+"){
                int top = st.top();
                st.pop();
                int newsum = top+st.top();
                st.push(top);
                st.push(newsum);
                total += st.top();
            }
            else if(i == "D"){
                st.push(st.top()*2);
                total += st.top();
            }
            else if(i == "C"){
                int top = st.top();
                st.pop();
                total -= top;
            }
            else{
                st.push(stoi(i));
                total += st.top();
            }
        }
        return total;
    }
};