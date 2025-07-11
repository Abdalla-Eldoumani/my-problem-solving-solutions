#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    cout << (char) toupper(s[0]) << s.substr(1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}