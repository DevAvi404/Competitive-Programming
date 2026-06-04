/**
 *    author:  Avishek Paul
 *    created: 03.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int> v(n);
    int zero = 0, one = 0, two = 0;
    for(auto &u : v){
        cin >> u;
        if(u == 0) zero++;
        else if(u == 1) one++;
        else two++;
    }
    int x = min(one, two);
    cout << x + zero + (one - x) / 3 + (two - x) / 3 << endl;
}

int32_t main() {
    optimize();
    int t = 1;  cin >> t;
    while (t--) solve_code();
    return 0;
}
