#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        cout << (b < c && b > a || b > c && b < a ? b : c < b && c > a || c > b && c < a ? c : a) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}