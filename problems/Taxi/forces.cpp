#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, x, ans; cin >> n;
    vector<int> cnt(5, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> x;
        cnt[x]++;
    }

    ans = cnt[4];
    ans += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);
    ans += cnt[2] / 2;
    
    if (cnt[2] % 2 == 1) {
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }
    
    ans += (cnt[1] + 3) / 4;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}