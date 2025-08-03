#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i % 2 == 1) {
                cout << "#";
            } else {
                if (j == m && (i / 2) % 2 == 1) {
                    cout << "#";
                } else if (j == 1 && (i / 2) % 2 == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}