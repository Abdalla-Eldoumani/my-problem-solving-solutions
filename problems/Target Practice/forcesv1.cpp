#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        int ans = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                char c; cin >> c;
                if (c == 'X') {
                    if ((i == 4 || i == 5) && (j == 4 || j == 5)) {
                        ans += 5;
                    } else if (3 <= i && i <= 6 && 3 <= j && j <= 6) {
                        ans += 4;
                    } else if (2 <= i && i <= 7 && 2 <= j && j <= 7) {
                        ans += 3;
                    } else if (1 <= i && i <= 8 && 1 <= j && j <= 8) {
                        ans += 2;
                    } else {
                        ans += 1;
                    }
                }
            }
        }

        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}