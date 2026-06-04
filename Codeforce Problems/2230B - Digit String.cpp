/**
 *    author:  Avishek Paul
 *    created: 02.06.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    string s; cin >> s;
    int n = s.size();
    int ans = LLONG_MAX;
    int four = count(s.begin(), s.end(), '4');
    vector<int>prefix(n+1), suffix(n+1);

    for(int i=0; i<n; i++){
        prefix[i] = (i ? prefix[i-1] : 0);
        if(s[i] == '1' || s[i] == '3') prefix[i]++;
    }
    for(int i=n-1; i>=0; i--){
        suffix[i] = (i+1 < n ? suffix[i+1] : 0);
        if(s[i] == '2') suffix[i]++;
    }
    for(int i=0; i<n; i++){
        int left = prefix[i];
        int right = (i+1 < n ? suffix[i+1] : 0);

        ans = min(ans, left + right);
    }
    ans = min(ans, suffix[0]);
    ans = min(ans, prefix[n-1]);

    cout << ans + four << endl;

}

int32_t main() {
    optimize();
    int t = 1;  cin >> t;
    while (t--) solve_code();
    return 0;
}
