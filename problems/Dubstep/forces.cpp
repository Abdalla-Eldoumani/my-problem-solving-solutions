#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (!res.empty() && res.back() != ' ') {
                res += ' ';
            }
        } else {
            res += s[i];
        }
    }
    
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}