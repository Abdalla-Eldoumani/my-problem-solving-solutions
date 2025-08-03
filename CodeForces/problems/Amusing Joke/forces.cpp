#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s1, s2, s1s2; cin >> s1 >> s2 >> s1s2;
    
    if (s1.length() + s2.length() != s1s2.length()) {
        cout << "NO\n";
        return;
    }

    int char_counts[26] = {0};
    for (char c : s1) char_counts[c - 'A']++;
    for (char c : s2) char_counts[c - 'A']++;
    for (char c : s1s2) char_counts[c - 'A']--;

    for (int i = 0; i < 26; ++i) {
        if (char_counts[i] != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}