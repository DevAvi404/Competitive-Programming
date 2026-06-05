/**
 *    author:  Avishek Paul
 *    created: 05.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, k; cin >> n >> k;
    vector<int> a(k), b(n);
    for(auto &u : a) cin >> u;
    for(auto &u : b) cin >> u;

    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++){
        v[i] = {b[i], i};
    }
    sort(v.rbegin(), v.rend());

    vector<int> ans;

    for(int i=0; i<n; i++){
        while (v[i].first < k + 1){
            ans.push_back(v[i].second + 1);
            v[i].first++;
        }
    }

    cout << ans.size() << endl;
    for(auto &u : ans) cout << u << " ";
    cout << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
