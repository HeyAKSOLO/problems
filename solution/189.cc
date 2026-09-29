#include <bits/stdc++.h>
using namespace std;

// my solution O(n) time/space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> x = nums;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[(i+k) % n] = x[i];
        }
    }
}; 

// efficient soln with space O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      k=k%n;
      reverse(nums.begin(),nums.begin()+(n-k));
      reverse(nums.begin()+(n-k),nums.end());
      reverse(nums.begin(),nums.end());
    }
};