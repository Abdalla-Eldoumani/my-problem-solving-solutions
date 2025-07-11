#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    int p, q, count = 0;

    while (n--) {
        cin >> p >> q;
        if (q - p >= 2) count++;
    }

    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}