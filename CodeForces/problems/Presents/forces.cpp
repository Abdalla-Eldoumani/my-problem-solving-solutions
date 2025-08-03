#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) cin >> p[i];

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i) ans[p[i]] = i;

    for (int i = 1; i <= n; ++i) cout << ans[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}