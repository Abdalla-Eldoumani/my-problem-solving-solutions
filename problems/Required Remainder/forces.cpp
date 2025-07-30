#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int x, y, n; cin >> x >> y >> n;
        if (n / x * x + y > n) cout << n / x * x + y - x << '\n';
        else cout << n / x * x + y << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}