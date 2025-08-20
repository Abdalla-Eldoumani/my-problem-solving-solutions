#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int min_x = 1e9, max_x = -1e9, min_y = 1e9, max_y = -1e9;
        for (int i = 0; i < 4; ++i) {
            int x, y; cin >> x >> y;
            min_x = min(min_x, x);
            max_x = max(max_x, x);
            min_y = min(min_y, y);
            max_y = max(max_y, y);
        }
        cout << max(max_x - min_x, max_y - min_y) * max(max_x - min_x, max_y - min_y) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}