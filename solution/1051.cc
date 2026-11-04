#include <bits/stdc++.h>
using namespace std;class Solution {


public:
    void radix(vector<int> &arr, int exp){
        vector<int> freq(10);
        for(int i : arr) freq[i / exp % 10]++;

        for(int i = 1; i < 10; i++) freq[i] += freq[i - 1];
        int n = arr.size();
        vector<int> output(n);
        for(int i = n-1; i >= 0; i--){
            int index = arr[i] / exp % 10;
            output[freq[index] - 1] = arr[i];
            freq[index]--;
        }

        for(int i = 0; i < n; i++) arr[i] = output[i];
    }
    void radix_sort(vector<int> &arr){
        int mas = *max_element(arr.begin() , arr.end());
        for(int i = 1; mas; i *= 10){
            radix(arr, i);
            mas /= 10;
        }
    }
    int heightChecker(vector<int>& heights) {
        vector<int> expect = heights;
        radix_sort(expect);
        int res = 0;
        for(int i = 0; i < heights.size(); i++){
            if(expect[i] != heights[i]) res++;
        }
        return res;
    }
};