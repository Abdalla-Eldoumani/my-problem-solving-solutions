#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s, c; cin >> s >> c;
        char ch = c[0];
        int n = s.size();

        if (n == 1) {
            cout << (s[0] == ch ? "YES" : "NO") << '\n';
            continue;
        }

        bool ok = false;
        for (int i = 0; i < n; ++i) {
            if (s[i] == ch && (i % 2 == 0)) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}