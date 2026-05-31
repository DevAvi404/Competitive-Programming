/**
 *    author:  Avishek Paul
 *    created: 26.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int x, y; cin >> x >> y;
    int sum = abs(x - y);
    int ans = 0;
    for(int i=1; i*i<=sum; i++){
        if(sum % i == 0){
            ans++;
            if((sum / i) != i) ans++;
        }
    }
    if(sum == 0) ans = 1;
    cout << ans << endl;
    while(x && y){
        cout << 1 << " " << -1 << " ";
        x--, y--;
    }
    while(x--) cout << 1 << " ";
    while(y--) cout << -1 << " ";
    cout << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
