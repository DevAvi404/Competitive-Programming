/**
 *    author:  Avishek Paul
 *    created: 05.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, x, s; cin >> n >> x >> s;
    string st; cin >> st;

    vector<int> v(x, s);
    int ans = 0, a = 0;

    for(int i = 0; i < n; i++) {
        if(st[i] == 'I') {
            for(int j=0; j<x; j++) {
                if(v[j] == s) {
                    v[j]--;
                    ans++;
                    break;
                }
            }
        }

        else if(st[i] == 'E') {
            bool done = false;
            for(int j=0; j<x; j++) {
                if(v[j] > 0 && v[j] < s) {
                    v[j]--;
                    ans++;
                    done = true;
                    break;
                }
            }

            if(!done && a) {
                for(int j = 0; j < x; j++) {
                    if(v[j] == s) {
                        v[j]--;
                        ans++;
                        a--;
                        break;
                    }
                }
            }
        }

        else {
            for(int j=0; j<x; j++){
                if(v[j] > 0 && v[j] < s){
                    v[j]--;
                    ans++;
                    a++;
                    break;
                }
                else if(v[j] == s){
                    v[j]--;
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
