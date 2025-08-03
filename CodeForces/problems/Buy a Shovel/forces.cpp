#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int k, r; cin >> k >> r;
    for (int i = 1; i <= 10; ++i) {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r) {
            cout << i << '\n';
            return;
        }
    }
    cout << 10 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}