#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
    if(num == 0) return false;
    int l = 1; 
    int h = num;
    while(l <= h){
       int mid = l + (h - l)/2;
       long long sqr = 1LL * mid * mid;
       if(sqr == num) return true;
       else if(sqr > num) h = mid - 1;
       else l = mid + 1;
    }   
    return false;
    }
};