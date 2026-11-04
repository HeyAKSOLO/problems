class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> res(nums.size()*2);
        int n = res.size()-1;
        for(int i = 0; i < nums.size(); i++){
            res[i] = nums[i];
            res[n-i] = nums[i];
        }
        return res;
    }
};