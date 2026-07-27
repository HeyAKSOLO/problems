#include <bits/stdc++.h>
using namespace std;

// Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> newarr(n, 0);
        int i = 0; 
        int j = n - 1;
        int k = n-1;
        while(i <= j){
            int lnum = abs(nums[i]);
            int rnum = abs(nums[j]);
            if(lnum > rnum){
                newarr[k--] = nums[i]*nums[i];
                i++;
            }
            else{
                newarr[k--] = nums[j]*nums[j];
                j--;
            }
        }
        return newarr;
    }
};