#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int> q;
       int i = 0;
       int count = 0;
       int n = tickets.size()-1;
       while(tickets[k] != 0){
        if(tickets[i] == 0){
            i++;
            if(i > n) i = 0;
            continue;
        }
        tickets[i]--;
        count++;
        i++;
        if(i > n) i = 0;
       }
       return count;
    }
};