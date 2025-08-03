#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (a[0] == a[1]) {
            int common_val = a[0];
            for (int i = 2; i < n; ++i) {
                if (a[i] != common_val) {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        } else cout << (a[0] == a[2] ? 1 + 1 : 0 + 1) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}