#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    string s; cin >> s;

    unordered_map<string, int> freq;
    for (int i = 0; i < n - 1; ++i) {
        string t = s.substr(i, 2);
        freq[t]++;
    }

    string ans;
    int max_freq = 0;
    for (const auto& p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            ans = p.first;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}