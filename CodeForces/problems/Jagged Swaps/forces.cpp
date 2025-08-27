#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        if (n == 1) {
            cout << "YES\n";
        } else if (n == 2) {
            if (a[0] == 1 && a[1] == 2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            if (a[0] == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
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