#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

// maximum-number-of-vowels-in-a-substring-of-given-length
class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int maxVowel = 0, left = 0, vowel = 0;

        for (int right = 0; right < s.length(); right++) {
            if (isVowel(s[right])) vowel++; // when the window size becomes equal to k it checks for the max_length then removes last vowel occurance from current tracker "vowel" 

            if ((right - left + 1) == k) {
                maxVowel = max(maxVowel, vowel);
                if (isVowel(s[left])) vowel--;
                left++;
            }
        }
        return maxVowel;
    }
};

// my solution
class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0;
        int max_l = 0;
        int count = 0;
        unordered_set<char> x = {'a', 'e', 'i', 'o', 'u'};
        for(int i = 0; i < k; i++){
            if(x.count(static_cast<char>(s[i]))){
                count++;
            }
        }
        max_l = count;
        for(int i = k; i < s.length(); i++){
            if(x.count(static_cast<char>(s[i]))){
                count++;
            }
            if(x.count(static_cast<char>(s[l]))){
                count--;
            }
            l++;
            max_l = max(max_l, count);
            if(max_l == k) return max_l;
        }
        return max_l;
    }
};