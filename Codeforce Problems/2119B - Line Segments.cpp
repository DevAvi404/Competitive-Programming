/**
 *    author:  Avishek Paul
 *    created: 14.07.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    double Px, Py, Qx, Qy; cin >> Px >> Py >> Qx >> Qy;
    vector<int> a(n);
    for(auto &u : a) cin >> u;
    double d = sqrt(((Px - Qx) * (Px - Qx)) + ((Py - Qy) * ((Py - Qy))));

    double sum = d, maxi = d;
    for(int i=0; i<n; i++){
        sum += a[i];
        maxi = max(maxi, double(a[i]));
    }
    if(sum - maxi < maxi) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
