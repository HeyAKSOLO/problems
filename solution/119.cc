#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> temp;
        for(int i = 0; i < rowIndex+1; i++){
            vector<int> row(i+1, 1);
            for(int j = 1; j < i; j++){
                row[j] = temp[i-1][j-1] + temp[i-1][j];
            }
            temp.push_back(row);
        }
        return temp[temp.size()-1];
    }
};