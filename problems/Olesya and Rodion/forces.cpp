#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, t; cin >> n >> t;

    if (t == 10) {
        if (n == 1) cout << -1 << '\n';
        else {
            cout << 1;
            for (int i = 1; i < n; ++i) cout << 0;
            cout << '\n';
        }
    } else {
        for (int i = 0; i < n; ++i) cout << t;
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}