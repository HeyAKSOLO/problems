#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i : students) q.push(i);
        int i = 0;
        int count = 0;
        while(!q.empty() && count < q.size()){
            if(q.front() == sandwiches[i]){
                count = 0;
                q.pop();
                i++;
            }
            else{
            count++;
            int x = q.front();
            q.pop();
            q.push(x);
            }
        }
        return q.size();
    }
};