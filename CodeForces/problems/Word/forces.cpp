#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    int upper = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) upper--;
        else if (isupper(s[i])) upper++;
    }
    for (int i = 0; i < s.size(); ++i) s[i] = upper > 0 ? toupper(s[i]) : tolower(s[i]);
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}