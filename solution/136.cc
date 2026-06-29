#include <bits\stdc++.h>
using namespace std;

// Single number (using XOR)

int single_num(vector<int> &nums){
    int num = 0;
    for(int i : nums){
        num ^= i;
    }
    return num;
}
