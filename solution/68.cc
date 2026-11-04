#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
    if(x == 0) return 0;
    int l = 1;
    int h = x;
    int mid;
    while(l <= h){
        mid = l + (h - l)/2;
        long long comp = static_cast<long long>(mid) * mid;
        if(mid == x / mid) return mid;
        else if(comp < x) l = mid + 1;
        else h = mid - 1;
    }
    return h;
    }
};