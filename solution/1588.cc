#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            int count = 1;
            int sub = 0;
            for(int j = i; j < arr.size(); j++){
                sub += arr[j];
                if(count & 1) ans += sub;
                count++;
            }
        }
        return ans;
    }
};