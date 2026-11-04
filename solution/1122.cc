#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxel = *max_element(arr1.begin() , arr1.end());
        vector<int> freq(maxel + 1);

        for(int i : arr1) freq[i]++;
        vector<int> output;

        for(int i : arr2){
            while(freq[i]){
                output.push_back(i);
                freq[i]--;
            }
        }

        for(int i = 0; i <= maxel; i++){
            while(freq[i]){
                output.push_back(i);
                freq[i]--;
            }
        }
        return output;

    }
};