#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int val) {
        int low = 0;
        int high = mat.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(val >= mat[mid][0] && val <= mat[mid][mat[mid].size()-1]){
                int ilow = 0;
                int ihigh = mat[mid].size()-1;
                while(ilow <= ihigh){
                    int imid = ilow + (ihigh - ilow)/2;
                    if(val == mat[mid][imid]) return true;
                    if(val < mat[mid][imid]) ihigh = imid-1;
                    else ilow = imid+1;
                }
                return false;
            } 
            else if(val < mat[mid][0]) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};