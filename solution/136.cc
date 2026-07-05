#include <bits\stdc++.h>
using namespace std;

// Single number (using XOR)

int single_num(vector<int> &nums){
    int ans = 0;
    for(int i : nums){
        ans ^= i;
    }
    return ans;
}
