#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        if (s == "abc" || s == "acb" || s == "cba" || s == "bac") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}