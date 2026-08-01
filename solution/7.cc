#include <bits/stdc++.h>
using namespace std;

// reverse number
class Solution {
public:
    int reverse(int x) {
        int newnum = 0;
        while(x){
            if(newnum > INT_MAX/10 || newnum < INT_MIN/10) return 0;
            newnum = newnum * 10 + x % 10;
            x /= 10;
        }
        return newnum;
    }
};

// better
class Solution {
public:
    int reverse(int x) {
        int newnum = 0;
        while(x){
            int pop = x % 10;
            x /= 10;
            if(newnum > INT_MAX/10 || (newnum == INT_MAX/10 && pop > 7)) return 0;
            if(newnum < INT_MIN/10 || (newnum == INT_MIN/10 && pop < -8)) return 0;
            newnum = newnum * 10 + pop;
        }
        return newnum;
    }
};