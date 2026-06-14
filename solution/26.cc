#include <iostream>
#include <vector>

// Remove Duplicates from Sorted Array
using namespace std;
int rem_dupls(vector<int> &x){
    int k = 1;
    for(int i = 1; i < x.size(); i++){
        if(x[i] != x[k-1]){
            x[k] = x[i];
            k++;
        }
    }
    return k;
}
int main(){
    vector<int> x = {1,1,2,3,4,5,5,5,6};
    int xm = rem_dupls(x);
    for(int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
}

// 27 is also silimar [Remove Duplicates from Sorted Array]