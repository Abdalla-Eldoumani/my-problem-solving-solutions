#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        // We could check directly:
        cout << (!(a == b && a == c && a == d) ? "NO\n" : "YES\n");
 
        // Alternatively, we could check directly:
        set<int> s{a,b,c,d};
        cout << (s.size() == 1 ? "YES\n" : "NO\n");
        
        // Or check using min and max:
        cout << (min({a,b,c,d}) != max({a,b,c,d}) ? "NO\n" : "YES\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}