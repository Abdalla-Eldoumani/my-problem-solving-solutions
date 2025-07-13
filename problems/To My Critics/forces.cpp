#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}