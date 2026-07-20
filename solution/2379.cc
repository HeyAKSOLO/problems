#include <bits/stdc++.h>
using namespace std;

// minimum-recolors-to-get-k-consecutive-black-blocks
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int l = 0;
    int minbb = k;
    int count = 0;
    int i;
    for(i = 0; i < k; i++){
       if(blocks[i] == 'B') count++;
    }    
    minbb = min(minbb, k-count);
    for(i; i < blocks.length(); i++){
        count += (blocks[i] == 'B');
        count -= (blocks[l] == 'B');
        minbb = min(minbb, k-count);
        l++;
    }
    return minbb;
    }
};