#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int count = 0;

        for (int i = 1; i <= n; i *= 10) {
            for (int digit = 1; digit <= 9; ++digit) {
                if (i * digit <= n) {
                    count++;
                }
            }
        }

        cout << count << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}