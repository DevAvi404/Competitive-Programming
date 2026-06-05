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
    int t, h, u; cin >> t >> h >> u;

    if(t > u + 2 * h)cout << 2*t + 3*h + 2*u + 1 << endl;
    else cout << 2*t + 3*h + 3*u - min(t, u) << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
