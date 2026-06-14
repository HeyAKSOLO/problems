#include <bits/stdc++.h>
using namespace std;

// Contains Duplicates
bool has_duples(vector<int> nums){
    unordered_set<int> seen;
    for(auto i : nums){
        if(seen.count(i)){
            return true;
        }
        seen.insert(i);
    }
    return false;
}