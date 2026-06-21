#include <bits\stdc++.h>
using namespace std;

// Count operations to obtain zero
class Solution {
public:
    int countOperations(int num1, int num2) {
        long long count = 0;
        while(num1 != 0 && num2 != 0){
            if(num1 >= num2){
                num1 -= num2;
                count++;
            }
            else if(num2 > num1){
                num2 -= num1;
                count++;
            }
        }
        return count;
    }
};