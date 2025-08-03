#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
    int damaged = 0;

    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged++;
        }
    }

    cout << damaged << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}