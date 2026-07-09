#include <bits/stdc++.h>
using namespace std;

// 242 - Valid Anagram
bool anagram(string s , string t){
    if(s.length() == t.length()){       // compare lengths
        unordered_map<char, int> mpp;
        for(char i : s){            // store each char frequency in map
            mpp[i]++;
        }
        for(char j : t){            // subtract each char frequency
            mpp[j]--;
        }
        for(auto &k : mpp){         // if any value is != 0, not anagram
            if(k.second != 0){
                return false;
            }
        }
        return true;
    }
    return false;
}


// better
bool anagram(string s , string t){
    if(s.length() == t.length()){       // compare lengths
        int mpp[26];
        for(int i = 0; i < s.length(); i++){
            mpp[s[i] - 'a']++;
            mpp[t[i] - 'a']--;
        }
        for(auto &k : mpp){         // if any value is != 0, not anagram
            if(k != 0){
                return false;
            }
        }
        return true;
    }
    return false;
}

