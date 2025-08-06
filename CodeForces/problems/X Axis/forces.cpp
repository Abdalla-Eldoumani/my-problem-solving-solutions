#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int x1, x2, x3; cin >> x1 >> x2 >> x3;
        int val = min({max(x1, x2), max(x2, x3), max(x1, x3)});
        cout << abs(x1 - val) + abs(x2 - val) + abs(x3 - val) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}