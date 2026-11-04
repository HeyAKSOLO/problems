#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // dutch national flag algo
        int n = nums.size();
        int l = 0;
        int mid = 0;
        int h = n - 1;
        while(mid <= h){
            if(nums[mid] == 0){
                swap(nums[l] , nums[mid]);
                l++; mid++;
            } 
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums[mid] , nums[h]); // don't increment mid as the swapped value needs to be rechecked
                h--;
            }
        }
    }
};