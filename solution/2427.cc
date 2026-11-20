#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int end = min(a, b);
        int res = 0;
        for(int i = 1; i <= end; i++){
            res += (a % i == 0 && b % i == 0);
        }
        return res;
    }
};