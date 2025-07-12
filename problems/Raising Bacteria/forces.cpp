#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long x; cin >> x;
    long long ans = 0;
    while (x) {
        ans += x % 2;
        x /= 2;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}