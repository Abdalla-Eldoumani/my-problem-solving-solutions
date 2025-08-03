#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        cout << (a < b && b < c ? "STAIR\n" : a < b && b > c ? "PEAK\n" : "NONE\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}