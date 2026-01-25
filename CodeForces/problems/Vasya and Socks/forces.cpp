#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;

    int days = 0;

    while (n > 0) {
        --n;
        ++days;

        if (days % m == 0) {
            ++n;
        }
    }

    cout << days << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}