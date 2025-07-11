#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int can_solve = 0;
    for (int i = 0; i < n; ++i) {
        int p, v, t; cin >> p >> v >> t;
        if (p + v + t >= 2) {
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