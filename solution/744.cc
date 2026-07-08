#include <iostream>
using namespace std;

// find-smallest-letter-greater-than-target
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char max = letters[0];
        for(char i : letters){
            if(i > target) return i;
        }
        return max;
    }
};
// since the array is sorted we can just return the element greater than target but it'll take 
// O(n) time
// Binary search would be a better approach with O(log n) time