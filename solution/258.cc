#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int res = 0;
        while(true){
            if(num == 0){
                if(res < 10) break;
                num = res;
                res = 0;
            }
            res += num % 10;
            num /= 10;
        }
        return res;
    }
};