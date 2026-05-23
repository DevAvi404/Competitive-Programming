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
    int n, k; cin >> n >> k;
    vector<int>v(n);
    int sum = 0;
    for(auto &u : v){
        cin >> u;
        sum += u;
    }
    if(sum%2 == 0 && (n*k)%2 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
