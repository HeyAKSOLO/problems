#include <bits\stdc++.h>
using namespace std;

// Intersection of 2 arrays

// using hash map
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;

        // Store elements of nums1
        for(int i : nums1){
            m[i] = 1;  // mark presence
        }

        // Traverse nums2 and find intersection
        for(int i : nums2){
            if(m[i] == 1){
                ans.push_back(i);  // add to result
                m[i] = 0;          // mark as used (avoid duplicates)
            }
        }

        return ans;
    }
};



// using set
class Solution2 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> ans;

        for(int num:nums2){
            if(s1.count(num)){
                ans.insert(num);
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};