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
    int n, m, a, b; cin >> n >> m >> a >> b;
    int x = __gcd(n, a);
    int y = __gcd(m, b);
    int z = __gcd(n, m);

    if(x == 1 && y == 1 && z <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
