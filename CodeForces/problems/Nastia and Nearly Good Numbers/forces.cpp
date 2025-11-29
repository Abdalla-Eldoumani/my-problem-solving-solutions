#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        long long a, b; cin >> a >> b;
        
        if (b == 1) {
            cout << "NO\n";
        } else {
            long long x = a * b;
            long long y = a;
            long long z = a * (b + 1);
            cout << "YES\n";
            cout << x << " " << y << " " << z << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}