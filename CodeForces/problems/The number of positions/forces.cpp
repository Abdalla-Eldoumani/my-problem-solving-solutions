#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, a, b; cin >> n >> a >> b;
    cout << min(n - a, b + 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}