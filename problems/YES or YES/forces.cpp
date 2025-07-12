#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << (s == "YES" || s == "YEs" || s == "Yes" || s == "yes" || s == "yeS" || s == "yES" || s == "yEs" || s == "YeS" ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}