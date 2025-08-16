#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        cout << max(0, max(b, c) - a + 1) << ' ' << max(0, max(a, c) - b + 1) << ' ' << max(0, max(a, b) - c + 1) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}