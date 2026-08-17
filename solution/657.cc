#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int hor = 0, ver = 0;
        for(char i : moves){
            if(i == 'R') hor++;
            else if(i == 'L') hor--;
            else if(i == 'U') ver++;
            else ver--;
        }
        return (ver == 0 && hor == ver);
    }
};