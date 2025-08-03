#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s, t; cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}   