#include <bits/stdc++.h>
using namespace std;

// 2 SUM
vector<int> two_sum(vector<int> &nums, int k){
    unordered_map<int, int> seen;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int comp = k - nums[i];     // complement
        if(seen.count(comp)){
            return {seen[comp] , i}; // return index of complement and current element(i)
        }
        seen[nums[i]] = i; // store each element as key with its index as value in map
    }
    return {};
}
