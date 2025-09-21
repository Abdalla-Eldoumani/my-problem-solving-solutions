#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n, k; string s; cin >> n >> k >> s;

        int cnt[26] = {0};
        for (char c : s) cnt[c - 'a']++;
        
        int odd = 0;
        for (int i = 0; i < 26; ++i) odd += (cnt[i] & 1);

        cout << (k + 1 >= odd ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}