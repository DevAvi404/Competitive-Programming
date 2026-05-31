/**
 *    author:  Avishek Paul
 *    created: 30.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int>a(n);
    for(auto &u : a)cin >> u;
    int c=INT_MAX,s=0;
    for(int i=0; i<n; i++){
        s+=a[i];
        c=min(c,s/(i+1));
        cout<<c<<  " ";
    }
    cout<<endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
