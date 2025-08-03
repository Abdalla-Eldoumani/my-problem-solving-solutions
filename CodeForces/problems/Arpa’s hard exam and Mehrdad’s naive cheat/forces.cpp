#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    if (n == 0) {
        cout << 1 << '\n';
    } else {
        int ans = n % 4;
        if (ans == 1) {
            cout << 8 << '\n';
        } else if (ans == 2) {
            cout << 4 << '\n';
        } else if (ans == 3) {
            cout << 2 << '\n';
        } else {
            cout << 6 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}