#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void heapify(vector<int> &vec, int n, int i){ // recursively heapify the array
        int high = i;
        int left = i * 2 + 1;
        int right = i * 2 + 2;
        
        if(left < n && vec[left] > vec[high]) high = left;
        if(right < n && vec[right] > vec[high]) high = right;

        if(high != i){
            swap(vec[i], vec[high]);
            heapify(vec, n, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = (n-1)/2; i >= 0; i--){ // build heap
            heapify(nums, n, i);
        }

        for(int i = n-1; i >= 1; i--){
            swap(nums[i], nums[0]);
            heapify(nums, i, 0);
        }

        return nums;
    }
};