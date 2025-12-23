#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;
    cout << (((((n + 1) / 2 + m - 1) / m) * m) <= n ? ((((n + 1) / 2 + m - 1) / m) * m) : -1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}