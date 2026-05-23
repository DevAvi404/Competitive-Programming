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
    int n, k; cin >> n >> k;
    int a[n+1];
    for(int i=1; i<=n; i++) cin >> a[i];
    int p; cin >> p;
    int x = a[p];

    int left_x = count(a+1, a+p, x);
    int right_x = count(a+p+1, a+n+1, x);

    int not_left_x = p - left_x - 1;
    int not_right_x = n - p - right_x;

    int left_c = 0, right_c = 0;

    for(int i=1; i<p; i++){
        if(a[i] == a[i+1] && a[i] != x) left_c ++;
    }
    for(int i=p; i<n; i++){
        if(a[i] == a[i+1] && a[i] != x) right_c ++;
    }

    int left = (not_left_x - left_c) * 2;
    int right = (not_right_x - right_c) * 2;

    cout << max(left, right) << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
