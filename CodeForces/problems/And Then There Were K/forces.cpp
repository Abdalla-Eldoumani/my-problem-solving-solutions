#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int p = 1;
        while (p <= n) {
            p <<= 1;
        }
        
        p >>= 1;
        cout << (p - 1) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}