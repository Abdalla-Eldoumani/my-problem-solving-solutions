#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        
        bool found = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                char c = (s[i] == 'a') ? 'b' : 'a';
                s.insert(i, 1, c);
                found = true;
                break;
            }
        }
        
        if (!found) {
            char c = (s[0] == 'a') ? 'b' : 'a';
            s.insert(0, 1, c);
        }
        
        cout << s << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}