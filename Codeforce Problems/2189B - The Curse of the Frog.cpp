/**
 *    author:  Avishek Paul
 *    created: 25.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n, x; cin >> n >> x;
    int roll_back = INT_MIN;
    int sum = 0;
    while(n--){
        int a, b, c; cin >> a >> b >> c;
        sum += (b - 1) * a;

        int p = b * a - c;
        roll_back = max(p, roll_back);
    }
    if(sum >= x){
        cout << 0 << endl;
    }
    else{
        x -= sum;
        if(roll_back > 0){
            if(x % roll_back == 0) x /= roll_back;
            else {
                x /= roll_back;
                x++;
            }
            cout << x << endl;
        }
        else cout << -1 << endl;
    }
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
