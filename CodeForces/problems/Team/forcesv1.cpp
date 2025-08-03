#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    auto can_solve = 0;
    for (int i = 0; i < n; ++i) {
        int p, v, t; cin >> p >> v >> t;
        if (p == 1 && v == 1 && t == 1) {
            can_solve++;
        } else if (p == 1 && v == 1 && t == 0) {
            can_solve++;
        } else if (p == 1 && v == 0 && t == 1) {
            can_solve++;
        } else if (p == 0 && v == 1 && t == 1) {
            can_solve++;
        }
    }

    cout << can_solve << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}