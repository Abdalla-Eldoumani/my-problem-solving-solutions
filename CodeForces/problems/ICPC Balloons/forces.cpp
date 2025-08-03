#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<bool> balloons(26, false);
        int total_balloons = 0;

        for (char c : s) {
            !balloons[c - 'A'] ? total_balloons += 2, balloons[c - 'A'] = true : total_balloons++;
        }

        cout << total_balloons << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}