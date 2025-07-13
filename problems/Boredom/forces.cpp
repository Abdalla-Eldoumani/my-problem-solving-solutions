#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> cnt(100001, 0);
    for (int i = 0; i < n; ++i) {
        cnt[a[i]]++;
    }

    vector<long long> dp(100001, 0);

    dp[0] = 0;
    dp[1] = cnt[1];

    for (int i = 2; i < 100001; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + static_cast<long long>(i) * cnt[i]);
    }
    
    cout << dp[100000] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}