#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    
    while (t--) {
        int x, y, z; cin >> x >> y >> z;
        int M = max(x, max(y, z));
        int cnt = (x == M) + (y == M) + (z == M);
        
        if (cnt < 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            if (x == M && y == M) {
                cout << M << " " << z << " " << z << "\n";
            } else if (x == M && z == M) {
                cout << y << " " << M << " " << y << "\n";
            } else {
                cout << x << " " << x << " " << M << "\n";
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