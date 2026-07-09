#include <bits/stdc++.h>
using namespace std;

// Unique number of Occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> occur;
        for(int i : arr){
            freq[i]++;
        }
        for(auto &i : freq){
            if(occur.count(i.second)) return false;
            occur.insert(i.second);
        }
        return true;
    }
};