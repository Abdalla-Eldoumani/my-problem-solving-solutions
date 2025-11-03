#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    
    while (t--) {
        int a, b; cin >> a >> b;

        if (a % 2 == 1) {
            cout << "NO\n";
        } else {
            if (b % 2 == 1 && a < 2) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}