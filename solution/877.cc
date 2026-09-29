#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i = 0, j = piles.size()-1;
        int alice = 0;
        int bob = 0;
        while(i < j){
            if(piles[i] >= piles[j]){
                alice += piles[i];
                bob += piles[j];
            } 
            else{
                alice += piles[j];
                bob += piles[i];
            }
            i++;
            j--;
        }
        return alice > bob;
    }
};