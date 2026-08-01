#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int high = INT_MIN;
        int index = -1;
        for(int i = 0; i < mat.size(); i++){
            int count = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1) count++;
            }
            if(count > high){
                high = count;
                index = i;
            }
        }
        return vector<int>{index, high};
    }
};