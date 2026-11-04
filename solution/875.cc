#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check_banana(vector<int>& piles, int k, int h){
        long long hours = 0;
        for(int i : piles){
            hours += (i + k - 1) / k; // compute ceiling division
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int res = hi;
        while(l <= hi){
            int mid = l + (hi - l)/2;
            if(check_banana(piles, mid, h)){
                res = mid;
                hi = mid - 1;
            } 
            else l = mid + 1;
        }
        return res;
    }
};