#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int prev, curr;
        cin >> prev;
        
        bool valid = true;
        for (int i = 1; i < n; ++i) {
            cin >> curr;
            
            int diff = abs(curr - prev);
            if (valid && diff != 5 && diff != 7) {
                valid = false;
            }

            prev = curr;
        }
        
        cout << (valid ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}