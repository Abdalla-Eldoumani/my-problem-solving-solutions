#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int x_sum = 0, y_sum = 0, z_sum = 0;
    for (int i = 0; i < n; ++i) {
        int x, y, z; cin >> x >> y >> z;
        x_sum += x, y_sum += y, z_sum += z;
    }

    cout << (x_sum == 0 && y_sum == 0 && z_sum == 0 ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}