#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;
    cout << (min(n, m) % 2 == 1 ? "Akshat" : "Malvika") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}