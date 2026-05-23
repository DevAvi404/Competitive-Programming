/**
 *    author:  Avishek Paul
 *    created: 23.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n = 7;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i=0; i<n-1; i++) sum += v[i];
    cout << v[n-1] - sum << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
