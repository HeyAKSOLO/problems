#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int news = 0;
            int cur = nums[i];
            while(cur){
                news += cur%10;
                cur /= 10;
            }
            if(news == i) return i;
        }
        return -1;
    }
};