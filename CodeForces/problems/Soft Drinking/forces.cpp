#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(k * l / nl, min(c * d, p / np)) / n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}