#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int og = x;
        int rev = 0;
        while(x){
            int temp = x%10;
            if(rev > INT_MAX/10 || (rev == INT_MAX/10 && temp > 7)) return false;
            rev = rev * 10 + temp;
            x /= 10;
        }
        return og == rev;
    }
};
// OR, instead of using while loop
/*
        for(;x!=0;x=x/10){
            int ld=x%10;
            RevN=(RevN*10)+ld;
        }
*/