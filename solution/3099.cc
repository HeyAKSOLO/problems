#include <bits\stdc++.h>
using namespace std;

// Harshad Number

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int total = 0;
        while(n > 0){
            total += n % 10;
            n /= 10;
        }
        return ((x % total == 0) ? total : -1);
        
    }
};