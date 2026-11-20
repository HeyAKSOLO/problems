#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        int spaces = 0;
        for(char i : s) spaces += (i == ' ');
        vector<string> words(spaces + 1);

        string word = "";
        for(char i : s){
            if(i == ' ') continue;
            if(isdigit(i)){
                words[i-48-1] = word;
                word = "";  

            }
            else word += i;
        }
        string res = "";
        for(string i : words) res += i + ' ';
        string ans = "";
        for(int i = 0; i < res.size()-1; i++) ans += res[i];
        return ans;
    }
};  