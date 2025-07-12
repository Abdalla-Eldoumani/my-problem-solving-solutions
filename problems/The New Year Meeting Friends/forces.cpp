#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int a, b, c; cin >> a >> b >> c;
    cout << max({a, b, c}) - min({a, b, c}) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}