#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
        cout << (max(s1, s2) < min(s3, s4) || min(s1, s2) > max(s3, s4) ? "NO" : "YES") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}