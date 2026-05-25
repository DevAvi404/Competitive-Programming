/**
 *    author:  Avishek Paul
 *    created: 25.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

const int N = 1e6 + 5;
vector<int> prime;
vector<bool> isPrime(N, true);

void sieve(){
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<N; i++){
        if(isPrime[i]){
            for(int j=i*i; j<N; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<N; i++){
        if(isPrime[i]) prime.push_back(i);
    }
}

void solve_code() {
    int n; cin >> n;
    vector<int>a(n);

    a[0] = prime[0];
    a[n-1] = prime[n-2];

    for(int i=1; i<n-1; i++){
        a[i] = prime[i-1] * prime[i];
    }
    for(auto &u : a) cout << u << " ";
    cout << endl;
}

int32_t main() {
    optimize();
    sieve();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
