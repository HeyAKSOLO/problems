#include <bits\stdc++.h>
using namespace std;

// Rotate String

// My approach(brute force)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() == goal.length()){
            int n = s.length();
            for(int i = 0; i < n; i++){
                char temp = s[0];
                for(int j = 0; j < n-1; j++){
                    s[j] = s[j+1];
                }
                s[n-1] = temp;
                if(s == goal){
                    return true;
                }
            }
            return false;
        }
        return false;
    }
};

// optimized solution using concatenation 
class Solution2 {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){ return false; }
        return (s+s).find(goal) != string::npos;
        } // s+s gives all possible combinations of rotation
};