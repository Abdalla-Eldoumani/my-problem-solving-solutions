#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int k; cin >> k;
    vector<int> a(12);
    
    for (int i = 0; i < 12; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    
    int sum = 0, cnt = 0;
    for (int i = 0; i < 12; ++i) {
        if (sum >= k) break;
        sum += a[i];
        cnt++;
    }

    if (sum < k) cout << -1 << '\n';
    else cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}