#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, b, d; cin >> n >> b >> d;
    int sum = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > b) continue;
        sum += x;
        if (sum > d) {
            ans++;
            sum = 0;
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