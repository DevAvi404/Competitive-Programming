/**
 *    author:  Avishek Paul
 *    created: 24.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, h, l; cin >> n >> h >> l;
    vector<int> v(n);
    for (auto &u : v) cin >> u;
    int x = max(h,l);
    int y = min(h,l);
    int r = 0, c = 0;
    for(int i=0; i<n; i++){
        if(v[i] <= y) r++;
        else if(v[i] > y && v[i] <= x) c++;
    }
    int ans = min(r,c);
    int a = max(0LL,(r - c));

    ans += a/2;
    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
