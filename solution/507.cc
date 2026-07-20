#include <bits/stdc++.h>
using namespace std; 

// Perfect Number
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int divisor_sum = 0;
        for(int i = 1; i < sqrt(num); i++){
            if(num % i == 0) divisor_sum += i;
        }
        for(int i = sqrt(num); i > 1; i--){
            if(num % i == 0) divisor_sum += num/i;
        }
        return divisor_sum == num;
    }
};