#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        long long n; cin >> n;
        
        if (n % 2 == 1) {
            cout << "YES\n";
        } else if ((n & (n - 1)) == 0) {
            cout << "NO\n";
        } else cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}