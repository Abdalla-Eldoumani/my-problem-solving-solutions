#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    int ans = 0;
    for (int l = 1; l < n; ++l) {
        if ((n - l) % l == 0) {
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}