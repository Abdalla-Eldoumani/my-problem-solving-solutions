#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int l, d, r, u; cin >> l >> d >> r >> u;

        vector<pair<int, int>> pts = {
            {-l, 0},
            {r, 0},
            {0, -d},
            {0, u}
        };

        auto dist2 = [](pair<int, int> a, pair<int, int> b) {
            int dx = a.first - b.first;
            int dy = a.second - b.second;
            return dx * dx + dy * dy;
        };

        bool found = false;
        sort(pts.begin(), pts.end());

        do {
            int d01 = dist2(pts[0], pts[1]);
            int d12 = dist2(pts[1], pts[2]);
            int d23 = dist2(pts[2], pts[3]);
            int d30 = dist2(pts[3], pts[0]);
            int d02 = dist2(pts[0], pts[2]);
            int d13 = dist2(pts[1], pts[3]);

            if (d01 > 0 && d01 == d12 && d12 == d23 && d23 == d30 && d02 == d13 && d02 == 2 * d01) {
                found = true;
                break;
            }
        } while (next_permutation(pts.begin(), pts.end()));

        cout << (found ? "Yes\n" : "No\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}