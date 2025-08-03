#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int a, b; cin >> a >> b;
    cout << min(a, b) << ' ' << (max(a, b) - min(a, b)) / 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}