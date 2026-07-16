#include <bits/stdc++.h>
using namespace std;

// gcd-of-odd-and-even-sums
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n == 0) return 0;
        int odd_ints = 0; // sum of first n odd ints = n*n
        int even_ints = 0;// sum of first n even ints = n * (n + 1)
        int till = n * 2;
        for(int i = 1; i <= till; i++){
            if(i & 1) {odd_ints += i;}
            else{ even_ints += i;}
        }
        int gcd = 1;
        for(int l = 2; l <= odd_ints; l++){
            if(odd_ints % l == 0 && even_ints % l == 0) gcd = l;
        }
        return gcd;
    }
};