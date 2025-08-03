#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) cin >> prices[i];

    sort(prices.begin(), prices.end());
    int q; cin >> q;
    while (q--) {
        long long m; cin >> m;
        cout << upper_bound(prices.begin(), prices.end(), m) - prices.begin() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}