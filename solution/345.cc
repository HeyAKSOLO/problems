#include <bits/stdc++.h>
using namespace std;

// Reverse Vowels of a String
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> mpp = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            while(i < j && !mpp.count(s[i])) i++; // move till vowel is found
            while(j > i && !mpp.count(s[j])) j--;
            if(i < j){ // additional safety check
                swap(s[i] , s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

// 2 pointer