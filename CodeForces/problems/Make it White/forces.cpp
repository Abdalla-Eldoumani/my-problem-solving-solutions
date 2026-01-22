#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int first_black = -1, last_black = -1;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if (first_black == -1) {
                    first_black = i;
                }
                last_black = i;
            }
        }

        if (first_black == -1) {
            cout << 0 << '\n';
        } else {
            cout << last_black - first_black + 1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}