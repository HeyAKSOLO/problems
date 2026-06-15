#include <bits/stdc++.h>
using namespace std;

// 283. Move Zeroes

void move_zeroes(vector<int> &nums){
    int i = 0;
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[i] , nums[j]);
            i++;
        }
    }
}

// using while loop
void moveZeroes(vector<int>& nums) {
    int i = 0 , j = 0;
    int n = nums.size();
    while(j < n){
        if(nums[j] != 0){
            swap(nums[i] , nums[j]);
            i++;
        }
        j++;
    }
}

// use 2 pointer