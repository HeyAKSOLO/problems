#include <iostream>
#include <vector>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                int j = i+1;
                k++;
                while(j < nums.size() && nums[i] == nums[j]){
                    nums.erase(nums.begin() + j);
                    j++;
                }
                i = j - 1;
            }
        }
        return k;
    }
int main(){
    vector<int> num = {0,0,1,1,1,2,2,3,3,4,4};
    int xm = removeDuplicates(num);
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << ' ';
    }
    return 0;
}