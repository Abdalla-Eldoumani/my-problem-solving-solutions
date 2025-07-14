#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        cout << min(x, y) << ' ' << max(x, y) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}