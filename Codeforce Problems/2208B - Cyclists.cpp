/**
 *    author:  Avishek Paul
 *    created: 16.03.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, k, p, m; cin >> n >> k >> p >> m;
    k--, p--;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    int ans = 0, sum = 0, win = v[p], dist = p;
    while(sum <= m){
        if(dist <= k){
            sum += win;
            if(sum <= m) ans++;
            auto arr = v;
            arr.push_back(win);
            arr.erase(arr.begin() + dist);
            v = arr;
            dist = n - 1;
        }
        else {
            int mini = INT_MAX, idx = 0;
            for(int i=0; i<=k; i++){
                if(v[i] < mini){
                    mini = v[i];
                    idx = i;
                }
            }
            sum += mini;
            auto arr = v;
            arr.push_back(mini);
            arr.erase(arr.begin() + idx);
            v = arr;
            dist--;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t=1; cin>>t;
    while (t--) solve_code();
    return 0;
}