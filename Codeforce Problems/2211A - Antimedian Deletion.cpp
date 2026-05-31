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
    int n; cin>>n;
    int v[n];
    for(auto &u:v)cin>>u;
    sort(v,v+n);
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    for(int i=0; i<n; i++)cout<<v[n-2]<<" ";
    cout<<endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
