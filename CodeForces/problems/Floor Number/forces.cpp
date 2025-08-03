#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        if (n <= 2) {
            cout << 1 << '\n';
        } else {
            cout << 1 + ((n - 2 + x - 1) / x) << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}