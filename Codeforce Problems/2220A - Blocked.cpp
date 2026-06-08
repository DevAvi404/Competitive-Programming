/**
 *    author:  Avishek Paul
 *    created: 08.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    for(auto &u : v) cout << u << " ";
    cout << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
