#include <bits\stdc++.h>
using namespace std;

// 169. Majority Element

int majorityElement(vector<int>& nums) {
    int major = nums[0] , count = 1;
    int n = nums.size();
    for(int i = 1; i < n; i++){
        if(count == 0){
            major = nums[i];
            count++;
        }
        else if(nums[i] == major){
            count++;
        }
        else{
            count--;
        }
    }
    return major;
}

// use 2 vairable, one for counting frequency, other for tracking major element