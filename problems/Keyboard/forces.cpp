#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string mole_alphabet = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c; cin >> c;
    if (c == 'R') {
        string s; cin >> s;
        for (size_t i = 0; i < s.size(); i++) {
            size_t pos = mole_alphabet.find(s[i]);
            s[i] = mole_alphabet[pos - 1];
        }
        cout << s << '\n';
    } else {
        string s; cin >> s;
        for (size_t i = 0; i < s.size(); i++) {
            size_t pos = mole_alphabet.find(s[i]);
            s[i] = mole_alphabet[pos + 1];
        }
        cout << s << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}