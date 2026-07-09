#include <bits/stdc++.h>
using namespace std;

//
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_size = 0;
        unordered_set<int> u_set;
        for(int i = 0; i < s.length(); i++){
            while(u_set.find(s[i]) != u_set.end()){ // till the duplicate element is removed
                u_set.erase(s[left]);               // from the set erase it
                left++;             // increase position of left (last duplicate elem)
            }
            u_set.insert(s[i]);     // insert current elem
            max_size = max(max_size, i - left + 1); // each time check the size of window 
        }                                           // with previous one
        return max_size;
    }
};