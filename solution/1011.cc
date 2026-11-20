#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool can_ship(const vector<int> &vec, int cap, int days){
        int wg = 0;
        int day = 0;
        for(int i : vec){
            if(wg + i > cap){
                wg = i;
                day++;
            }
            else wg += i;
        }
        return ++day <= days; // update day for remaining capacity in the end
    }
    int shipWithinDays(vector<int>& w, int days) {
        int l = *max_element(w.begin(), w.end());
        int h = accumulate(w.begin(), w.end(), 0);
        int res = h;
        while(l <= h){
            int mid = l + (h - l)/2;
            if(can_ship(w, mid, days)){
                res = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return res;
    }
};