#include <bits/stdc++.h>
using namespace std;

// find-greatest-common-divisor-of-array
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small, lar;
        lar = small = nums[0];
        for(int i : nums){      // find largest and smallest num
            if(i < small) small = i;
            if(i > lar) lar = i;
        }
        while(small){
            int temp = lar % small;         // use Euclidean algo to find GCD
            lar = small;
            small = temp;
        }
        return lar;
    }
};