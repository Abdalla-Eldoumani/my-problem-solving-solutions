#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int a, b; cin >> a >> b;
    int ans = 0;
    ans += a;

    while (true) {
        if (a < b) break;
        ans += a / b;
        a = a % b + a / b;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}