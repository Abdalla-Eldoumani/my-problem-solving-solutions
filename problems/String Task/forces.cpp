#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    string res = "";

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') continue;
        else {
            res += '.';
            res += tolower(s[i]);
        }
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}