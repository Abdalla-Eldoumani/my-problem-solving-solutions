#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int a_count = 0;
        for (char c : s) c == 'A' ? a_count++ : 0;
        cout << (a_count > 2 ? "A\n" : "B\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}