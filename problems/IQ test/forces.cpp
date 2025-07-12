#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    int odd_c = 0, even_c = 0;
    for (int i = 1; i <= n; ++i) if (a[i] % 2 == 0) even_c++; else odd_c++;

    if (odd_c > even_c) {
        for (int i = 1; i <= n; ++i) if (a[i] % 2 == 0) {
            cout << i << '\n';
            return;
        }
    } else {
        for (int i = 1; i <= n; ++i) if (a[i] % 2 != 0) {
            cout << i << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}