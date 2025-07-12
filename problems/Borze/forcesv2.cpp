#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    string result;
    for (size_t i = 0; i < s.size(); ) {
        if (s[i] == '.') {
            result += "0";
            i++;
        } else if (s[i] == '-') {
            if (i + 1 < s.size() && s[i + 1] == '.') {
                result += "1";
                i += 2;
            } else {
                result += "2";
                i += 2;
            }
        }
    }
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}