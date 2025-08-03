#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    bitset<26> seen;
    for (char c : s) {
        seen[tolower(c)] = 1;
    }
    
    cout << (seen.count() == 26 ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}