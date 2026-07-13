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
    int n, m; cin >> n >> m;
    int maxi = INT_MIN;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
            maxi = max(maxi, v[i][j]);
        }
    }
    int cnt = 0;
    map<int,int> row, column;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j] == maxi){
                cnt ++;
                row[i] ++;
                column[j] ++;
            }
        }
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int num = row[i] + column[j];
            if(v[i][j] == maxi) num --;
            if(num == cnt){
                flag = true;
                break;
            }
        }
    }
    if(flag) cout << maxi - 1 << endl;
    else cout << maxi << endl;
}

int32_t main() {
    optimize();
    int t; cin >> t;
    while(t--) solve_code();
    return 0;
}
