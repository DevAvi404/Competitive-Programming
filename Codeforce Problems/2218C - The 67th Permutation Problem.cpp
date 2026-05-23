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
    int n; cin >> n;
    int x = 1, y = n + 1;
    for(int i=1; i<=n; i++){
        cout << x++ << " " << y++ << " " << y++ << " ";
    }
    cout << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
