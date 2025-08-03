#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        map<int, long long> freq;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            ans += freq[a[i] - i];
            ++freq[a[i] - i];
        }
        
        cout << ans << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}