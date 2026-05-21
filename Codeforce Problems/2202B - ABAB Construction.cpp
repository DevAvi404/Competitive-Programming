/**
 *    author:  Avishek Paul
 *    created: 21.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    string s; cin >> s;
    bool flag = true;
    if(n%2 != 0){
        if(s[0] == 'b'){
            cout << "NO" << endl;
            return;
        }
        s.erase(0,1);
    }
    for(int i=1; i<s.size(); i+=2){
        if(s[i] != '?' && s[i-1] != '?' && s[i] == s[i-1]){
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
