#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string a; cin >> a;

        int m; cin >> m;
        string b, c; cin >> b >> c;

        for (int i = 0; i < m; ++i) {
            if (c[i] == 'D') {
                a.insert(a.end(), b[i]);
            } else if (c[i] == 'V') {
                a.insert(a.begin(), b[i]);
            }
        }

        cout << a << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}