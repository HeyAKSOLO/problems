#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxar = 0;
        while(i < j){
            int small = height[i] < height[j] ? height[i] : height[j];
            int curh = (j-i)*small;
            maxar = max(maxar, curh);
            small == height[i] ? i++ : j--;
        }
        return maxar;
    }
};