/**
 *    author:  Avishek Paul
 *    created: 06.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, ans = 0; cin >> n;
    vector<int> v(n);
    for(auto &u : v){
        cin >> u;
        if(u > 1) ans += u;
    }
    bool one = false;
    for(int i=n-1; i>=0; i--){
        if(v[i] == 1) one = true;
        else break;
    }
    if(one) ans++;
    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
