#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        
        int ops = 0;
        while (x.find(s) == string::npos && ops < 6) {
            x += x;
            ops++;
        }
        
        if (x.find(s) != string::npos) {
            cout << ops << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}