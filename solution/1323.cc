#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        vector<int> temp;
        for(; num != 0; num /= 10){
            temp.push_back(num % 10);
        }
        int n = temp.size();
        for(int i = n-1; i >= 0; i--){
            if(temp[i] == 6){
                temp[i] = 9;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) num = num*10 + temp[i];
        return num;
    }
};