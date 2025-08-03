#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        
        int min_v = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            min_v = min(min_v, a[i]);
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] - min_v;
        }
        
        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}