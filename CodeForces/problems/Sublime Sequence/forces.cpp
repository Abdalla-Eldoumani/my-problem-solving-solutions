#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int x, n; cin >> x >> n;
        cout << (n & 1) * x << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}