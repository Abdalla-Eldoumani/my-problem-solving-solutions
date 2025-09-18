#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string a; cin >> a;
        string res = "";
        
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'p') {
                res += 'q';
            } else if (a[i] == 'q') {
                res += 'p';
            } else {
                res += 'w';
            }
        }
        
        cout << res << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}