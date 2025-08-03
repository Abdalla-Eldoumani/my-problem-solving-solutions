#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n; cin >> n;

    string s = to_string(n);
    auto count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}