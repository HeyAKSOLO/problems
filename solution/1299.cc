#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // vector<int> res;
        int max_val = -1;
        for(int i = arr.size()-1; i >= 0; i--){
            int old_val = max_val;
            max_val = max(arr[i], max_val);
            arr[i] = old_val;
        }
        return arr;
    }
};