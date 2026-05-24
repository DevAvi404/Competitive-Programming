/**
 *    author:  Avishek Paul
 *    created: 24.05.2026
**/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define int long long

void solve_code() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    int positive = 0;
    for(int i=0; i<n; i++){
        if(v[i] > 0) positive++;
    }
    int negative = n - positive;
    if(positive == n){
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    if(negative == n){
        cout << 0 << endl << endl;
        return;
    }
    vector<int> pos, neg;
    for(int i=0; i<n; i++){
        if(v[i] > 0) pos.push_back(i+1);
        else neg.push_back(i+1);
    }
    /*
    for(auto &u : pos_idx) cout << u << " ";
    cout << endl;
    for(auto &u : neg_idx) cout << u << " ";
    cout << endl;*/

    int c = 0;
    for(int i=0; i<pos.size()-1; i++){
        if(pos[i]+1 == pos[i+1]){
            c++;
            pos.erase(pos.begin() + i);
            i--;
        }
    }
    for(int i=0; i<neg.size()-1; i++){
        if(neg[i]+1 == neg[i+1]){
            c++;
            neg.erase(neg.begin() + i);
            i--;
        }
    }
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end(), greater<int>());

    while(!neg.empty() && neg[0] > pos[0]){
        neg.erase(neg.begin());
    }

    vector<int> arr;
    int i = 0, j = 0;
    while(i < pos.size() && j < neg.size()){
        if(pos[i] > neg[j]){
            arr.push_back(pos[i]);
            i++;
        }
        else{
            arr.push_back(neg[j]);
            j++;
        }
    }
    while(i < pos.size()){
        arr.push_back(pos[i]);
        i++;
    }
    while(j < neg.size()){
        arr.push_back(neg[j]);
        j++;
    }

    cout << arr.size() << endl;
    for(auto &u : arr){
        cout << u << " ";
    }
    cout << endl;
}

int32_t main() {
    optimize();
    int t=1;  cin>>t;
    while (t--) solve_code();
    return 0;
}
