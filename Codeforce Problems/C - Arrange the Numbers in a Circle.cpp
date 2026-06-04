/**
 *    author:  Avishek Paul
 *    created: 04.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(auto &u : v){
        cin >> u;
        if(u != 1) sum += u;
    }
    if(n == 1 && sum < 3){
        cout << 0 << endl;
        return;
    }
    int one = count(v.begin(), v.end(), 1);

    if(one == 0){
        cout << sum << endl;
        return;
    }
    if(one == n){
        cout << 0 << endl;
        return;
    }

    int c = 0;

    for(int i=0; i<n; i++){
        if(v[i] > 1) c += (v[i] - 2) / 2;
    }

    int ans;
    if(one == n - 1) ans = sum + min(sum / 2, one);
    else  ans = sum + min(one, c);

    if(ans < 3) ans = 0;

    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t = 1;  cin >> t;
    while (t--) solve_code();
    return 0;
}
