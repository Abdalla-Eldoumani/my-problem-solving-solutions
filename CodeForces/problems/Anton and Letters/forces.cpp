#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; getline(cin, s);
    bitset<26> charSet;
    for (char c : s) if (isalpha(c)) c = tolower(c), charSet[c] = 1;
    cout << charSet.count() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}