#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        if (n % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        int lastDigit = n % 10;
        int prefix = n / 10;

        for (int i = 0; i < 10; i++) {
            int candidate = prefix * 10 + i;
            if (candidate % 7 == 0) {
                cout << candidate << "\n";
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}