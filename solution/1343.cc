#include <bits/stdc++.h>
using namespace std;

// Number of Sub-arrays of Size K and Average >= Threshold
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i_sum = 0;  // either compare each window/k with threshold OR 
        int count = 0;  // take target = k * threshold and then compare 
        int target = k * threshold;     // second one is more efficient as we don't have to divide each time then compare 
        for(int i = 0; i < k; i++){
            i_sum += arr[i];
        }   

        if(i_sum >= target) count++;

        for(int i = k; i < arr.size(); i++){
            i_sum += arr[i] - arr[i - k];
            if(i_sum >= target) count++;
        }

        return count;
    }
};