#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << 2 * (a[n - 1] + a[n - 2] - a[0] - a[1]) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}