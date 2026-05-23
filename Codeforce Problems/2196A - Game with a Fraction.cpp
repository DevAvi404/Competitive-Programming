/**
 *    author:  Avishek Paul
 *    created: 22.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int p, q; cin >> p >> q;
    if(p < q && 3*p >= 2*q){
        cout << "Bob" << endl;
    }
    else cout << "Alice" << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
