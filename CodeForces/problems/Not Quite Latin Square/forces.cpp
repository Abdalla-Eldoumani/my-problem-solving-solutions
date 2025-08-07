#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int a_count = 0, b_count = 0, c_count = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char c; cin >> c;
                if (c == 'A') a_count++;
                else if (c == 'B') b_count++;
                else if (c == 'C') c_count++;
                else continue;
            }
        }
        
        int min_count = min(a_count, min(b_count, c_count));
        if (min_count == a_count) cout << "A\n";
        else if (min_count == b_count) cout << "B\n";
        else cout << "C\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}