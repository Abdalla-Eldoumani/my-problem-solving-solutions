#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        
        string s = to_string(x);
        int digit = s[0] - '0', total = 0;
        
        for (int d = 1; d < digit; d++) {
            for (int l = 1; l <= 4; l++) total += l;
        }
        
        for (int l = 1; l <= s.length(); l++) {
            total += l;
        }
        
        cout << total << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}