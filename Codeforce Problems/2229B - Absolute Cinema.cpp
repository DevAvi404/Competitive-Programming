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
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &u : a) cin >> u;
    for(auto &u : b) cin >> u;
    for(int i=0; i<n; i++){
        if(a[i] > b[i]) swap(a[i], b[i]);
    }
    int max_a = *max_element(a.begin(), a.end());
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += b[i];
    }
    cout << max_a + sum << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
