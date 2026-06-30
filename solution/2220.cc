#include <bits\stdc++.h>
using namespace std;

// Minimum Bit flips to convert number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;     // here same bits will convert to 0 and different bits(needed to be flipped) convert to 1
        int flips = 0;
        while(ans > 0){     // count number of set bits(1's)
            flips += ((ans & 1) == 1);
            ans >>= 1;
        }
        return flips;
    }
};