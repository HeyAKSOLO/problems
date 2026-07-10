#include <bits/stdc++.h>
using namespace std;

// to be solved with O(1) space
// using hashing - O(n) space , not optimal solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> set(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 1; i <= n; i++){
            if(!set.count(i)) ans.push_back(i);
        }
        return ans;

    }
};

// optimal solution
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int val = abs(nums[i]) - 1;
            if(nums[val] > 0){
            nums[val] *= -1;
            }
        }
        for(int i = 0; i < n; i++){
            if(nums[i] > 0) ans.push_back(i+1);
        }
        return ans;
    }
};
