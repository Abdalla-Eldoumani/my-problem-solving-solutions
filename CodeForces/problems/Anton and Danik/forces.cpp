#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int length_A = 0, length_D = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') length_A++;
        else if (s[i] == 'D') length_D++;
    }

    if (length_A > length_D) cout << "Anton\n";
    else if (length_A < length_D) cout << "Danik\n";
    else cout << "Friendship\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}