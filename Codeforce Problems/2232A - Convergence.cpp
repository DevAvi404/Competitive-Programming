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
    vector<int>v(n);
    for(auto &u : v)cin >> u;
    int c=INT_MAX;
    for(int i=0; i<n; i++){
        int x=v[i], l=0, r=0;
        for(int j=0; j<n; j++){
            if(v[j]<x)l++;
            else if(v[j]>x)r++;
        }
        c=min(c,max(l,r));
    }
    cout<<c<<endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
