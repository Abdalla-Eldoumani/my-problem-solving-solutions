#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m, k; cin >> n >> m >> k;
    cout << (m >= n && k >= n ? "Yes\n" : "No\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}