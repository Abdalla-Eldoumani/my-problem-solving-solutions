#include <bits/stdc++.h>

using namespace std;

inline void solve() {
    string a, b; cin >> a >> b;
    for (auto &c : a) if (c < 92) c += 32;
    for (auto &c : b) if (c < 92) c += 32;

    if (a > b) cout << 1 << '\n';
    else if (a < b) cout << -1 << '\n';
    else cout << 0 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}