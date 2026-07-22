#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n > 0){
        string s;
        cin >> s;
        int size = s.length();
        if(size > 10){
            cout << s[0] << size-2 << s[size-1] << endl;
        }    
        else{
            cout << s << endl;
        }
        n--;
    }
    return 0;
}