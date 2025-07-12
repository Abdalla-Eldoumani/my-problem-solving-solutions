#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;

    bool rule_all_uppercase = !s.empty() && all_of(s.begin(), s.end(), ::isupper);

    bool rule_first_lower_rest_uppercase = false;
    if (!s.empty() && islower(s[0])) {
        if (s.size() == 1) rule_first_lower_rest_uppercase = true;
        else if (all_of(s.begin() + 1, s.end(), ::isupper)) rule_first_lower_rest_uppercase = true;
    }

    if (rule_all_uppercase) {
        for (char &c : s) c = tolower(c);
    } else if (rule_first_lower_rest_uppercase) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); ++i) s[i] = tolower(s[i]);
    }

    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}