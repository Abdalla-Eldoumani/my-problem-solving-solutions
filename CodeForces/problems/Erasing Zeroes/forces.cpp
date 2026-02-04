#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        int first_one = -1, last_one = -1;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (first_one == -1) first_one = i;
                last_one = i;
            }
        }

        if (first_one == -1) {
            cout << 0 << "\n";
        } else {
            int count = 0;
        
            for (int i = first_one + 1; i < last_one; i++) {
                if (s[i] == '0') count++;
            }
        
            cout << count << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}