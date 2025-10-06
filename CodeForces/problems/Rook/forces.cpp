#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        char col = s[0];
        char row = s[1];

        vector<string> moves;
        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != col) {
                moves.push_back(string(1, c) + row);
            }
        }

        for (char r = '1'; r <= '8'; ++r) {
            if (r != row) {
                moves.push_back(string(1, col) + r);
            }
        }

        for (const string& move : moves) {
            cout << move << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}