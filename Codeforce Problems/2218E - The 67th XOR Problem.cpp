/**
 *    author:  Avishek Paul
 *    created: 25.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ans = max(ans, (v[i] ^ v[j]));
        }
    }
    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
