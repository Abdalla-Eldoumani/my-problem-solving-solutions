#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int y; cin >> y;
    
    for (int year = y + 1; ; year++) {
        string s = to_string(year);
        bool distinct = true;

        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    distinct = false;
                    break;
                }
            }
            if (!distinct) break;
        }
        
        if (distinct) {
            cout << year << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}