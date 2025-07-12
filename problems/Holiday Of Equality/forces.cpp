#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int S = 0, mx = *max_element(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) S += mx - a[i];
    
    cout << S << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}