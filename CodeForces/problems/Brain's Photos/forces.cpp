#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;

    int total_chars = n * m;
    for (int i = 0; i < total_chars; ++i) {
        char c; cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y') {
            cout << "#Color\n";
            return;
        }
    }

    cout << "#Black&White\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}