#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n, x; cin >> n >> x;

    long long ans = 0;
    for (long long i = 1; i * i <= x; ++i) {
        if (x % i != 0) continue;
        long long j = x / i;
        
        if (i == j) {
            if (i <= n) ++ans;
        } else {
            if (i <= n && j <= n) ans += 2;
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