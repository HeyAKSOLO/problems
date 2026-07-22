#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int ans = 0;
    while(n--){
        int p, v, t; cin >> p >> v >> t;
        if(p + v + t >= 2) ans++;
    }
    cout << ans << '\n';
    return 0;
}