#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int h = n;
        while(l <= h){
            int mid = l + (h - l)/2;
            long long tot = 1LL * mid * (mid + 1)/2;
            if(tot == n) return mid;
            else if(tot > n) h = mid - 1;
            else l = mid + 1;
        }
        return h;
    }
};