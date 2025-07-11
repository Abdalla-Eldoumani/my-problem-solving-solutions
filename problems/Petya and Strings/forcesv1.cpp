#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s1, s2; cin >> s1 >> s2;
    
    for (auto &c : s1) c = tolower(c);

    for (auto &c : s2) c = tolower(c);

    auto res = (s1 == s2) ? 0 : (s1 < s2) ? -1 : 1;
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}