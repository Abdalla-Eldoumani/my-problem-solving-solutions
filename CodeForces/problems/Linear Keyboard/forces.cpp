#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        vector<int> pos(26);
        for (int i = 0; i < 26; ++i) {
            pos[s[i] - 'a'] = i;
        }

        string q; cin >> q;
        long long total_distance = 0;
        for (int i = 1; i < (int)q.size(); ++i) {
            total_distance += abs(pos[q[i] - 'a'] - pos[q[i - 1] - 'a']);
        }

        cout << total_distance << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}