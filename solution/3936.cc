#include <bits/stdc++.h>
using namespace std;

// 3936 - Minimum swaps needed to move zeroes to end
int minimumSwaps(vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;
    int count = 0;
    while(i < j){
        while(i < j && nums[i] != 0) i++; 
        while(j > i && nums[j] == 0) j--;
        if(i < j){
            // swap(nums[i], nums[j]); -- they're saying minimum swaps needed to telling to actually swap 
            i++;
            j--;
            count++;
        }
    }
    return count;
}