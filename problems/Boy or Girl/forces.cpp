#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;

    unordered_set<char> distinct_characters;
    for (char c : s) distinct_characters.insert(c);

    cout << (distinct_characters.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}