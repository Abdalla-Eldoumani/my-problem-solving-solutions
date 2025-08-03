#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    int min_moves = 0;
    char current_char = 'a';
    
    for (char &c : s) {
        int moves = min(abs(c - current_char), abs(26 - abs(c - current_char)));
        min_moves += moves;
        current_char = c;
    }
    
    cout << min_moves << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}