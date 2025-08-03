#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        long long n; cin >> n;
        long long ans = 0;
        
        for (int i = 0; i < n; ++i) {
            long long a; cin >> a;
            ans += a;
        }

        cout << (ans == ((long long) sqrt(ans) * (long long) sqrt(ans)) ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}