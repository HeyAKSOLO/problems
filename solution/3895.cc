class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i : nums){
            int cp = i;
            while(cp){
                count += (cp%10 == digit);
                cp /= 10;
            }
        }
        return count;
    }
};