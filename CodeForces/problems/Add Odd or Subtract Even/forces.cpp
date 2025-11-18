#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        long long a, b; cin >> a >> b;
        if (a == b) cout << 0 << '\n';
        else if (a < b) cout << (((b - a) & 1) ? 1 : 2) << '\n';
        else cout << (((a - b) % 2 == 0) ? 1 : 2) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}