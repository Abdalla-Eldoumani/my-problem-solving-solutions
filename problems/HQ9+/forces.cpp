#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    cout << (s.find('H') != string::npos || s.find('Q') != string::npos || s.find('9') != string::npos ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}