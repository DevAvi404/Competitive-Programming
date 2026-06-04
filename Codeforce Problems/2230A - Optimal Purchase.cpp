/**
 *    author:  Avishek Paul
 *    created: 01.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, a, b; cin >> n >> a >> b;

    int ans;
    if(n <= 3){
        ans = min(n * a, b);
    }
    else if(a > b / 3.0){
        ans = min(((n / 3) * b + b), ((n / 3) * b + (n % 3) * a));
    }
    else ans = n * a;
    cout << ans << endl;

}

int32_t main() {
    optimize();
    int t = 1;  cin >> t;
    while (t--) solve_code();
    return 0;
}
