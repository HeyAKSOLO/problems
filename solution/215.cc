#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void heapify(vector<int> &arr, int n, int i){
        int high = i;
        int left = 2 * i + 1, right = 2 * i + 2;

        if(left < n && arr[left] > arr[high]) high = left;
        if(right < n && arr[right] > arr[high]) high = right;

        if(high != i){
            swap(arr[high], arr[i]);
            heapify(arr, n, high);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = (n - 1)/2; i >= 0; i--) heapify(nums, n, i); // building heap
        for(int i = n-1; i >= n-k; i--){
            swap(nums[i], nums[0]);
            heapify(nums, i, 0);
        }
        return nums[n-k];
    }
};