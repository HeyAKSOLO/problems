#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> stc;
        for(int i = nums2.size()-1; i >= 0; i--){
            while(!stc.empty() && nums2[i] >= stc.top()) stc.pop();
            mp[nums2[i]] = (stc.empty() ? -1 : stc.top());
            stc.push(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};