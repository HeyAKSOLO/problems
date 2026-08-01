#include <bits/stdc++.h>
using namespace std;

// my solution time O(n) space O(1)
class Solution {
public:
    int digitFrequencyScore(int n) {
        int total = 0;
        unordered_map<int, int> m;
        while(n){
            m[n%10]++;
            n /= 10;
        }
        for(auto &i : m){
            total += i.first*i.second;
        }
        return total;
    }
};

// optimal time O(log n) space O(1)
class Solution {
public:
    int digitFrequencyScore(int n) {
        int total = 0;
        int m[10] = {0};
        while(n){
            m[n%10]++;
            n /= 10;
        }
        for(int i = 0; i < 10; i++){
            total += i*m[i];
        }
        return total;
    }
};