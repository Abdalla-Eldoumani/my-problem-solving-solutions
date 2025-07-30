#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int a; cin >> a;
            if (a == k) {
                found = true;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}