#include <bits/stdc++.h>
using namespace std;

// my solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int mod = 0;
        int n = digits.size();
        for(int i = n-1; i >= 0; i--){
            if(mod == 0){
                digits[i] = (digits[i]+1) % 10;
                mod = digits[i] % 10;
            }
            else break;
        }
        if(mod == 0){
            for(int i = 0; i <= n; i++){
                if(i == 0) digits[i] = 1;
                else if(i == n) digits.push_back(0);
            }
        }
        return digits;
    }
};

// cleaner solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
      for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        } else digits[i]=0;
      }
      digits.insert(digits.begin(), 1);
    return digits;
    }
}; 