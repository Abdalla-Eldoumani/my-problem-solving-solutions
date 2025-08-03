#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        unordered_map<char, int> mp;
        vector<char> v(n);
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            mp[c]++;
            v[i] = c;
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            mp[v[i]]--;
            if (mp[v[i]] != 0 && v[i] != v[i + 1]) {
                cout << "NO\n";
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else continue;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}