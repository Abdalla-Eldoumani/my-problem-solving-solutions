#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int year = stoi(s);

        bool found = false;
        for (int a = 0; a <= 99 && !found; ++a) {
            for (int b = 0; b <= 99 && !found; ++b) {
                if ((a + b) * (a + b) == year) {
                    cout << a << ' ' << b << '\n';
                    found = true;
                }
            }
        }

        if (!found) {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}