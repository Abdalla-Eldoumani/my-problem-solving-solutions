#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s1, s2; cin >> s1 >> s2;
        swap(s1[0], s2[0]);
        cout << s1 << ' ' << s2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}