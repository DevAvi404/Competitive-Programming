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
    int x, y; cin >> x >> y;
    int n = x + y;
    int max_odd = n % 2 ? n + 1 : n;
    int max_even = n / 2;

    if(x > max_even || y > max_odd) cout << "NO" << endl;
    else {
        if(n % 2 == 0) x--;
        else y--;

        if(x < 0 || y < 0) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for(int i=2; i<=n-x; i++) cout  << 1 << " " << i << endl;
            int c = 2;
            for(int i=1; i<=x; i++) cout << c++ << " " << n - x + i << endl;
        }
    }
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
