#include <bits\stdc++.h>
using namespace std;

// Counting Bits
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            int bits = 0;
            int x = i;
            while(x > 0){
                if(x & 1) bits++;
                x >>= 1;
            }
            ans.push_back(bits);
        }
        return ans;
    }
};