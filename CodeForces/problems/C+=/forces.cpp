#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int a, b, n; cin >> a >> b >> n;
        int cnt = 0;
        while (a <= n && b <= n) {
            if (a < b) a += b;
            else b += a;
            cnt++;
        }
        cout << cnt << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}