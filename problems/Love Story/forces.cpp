#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        const string target = "codeforces";
        int num_of_idx = 0;

        for (int i = 0; i < 10; ++i) {
            if (s[i] != target[i]) {
                num_of_idx++;
            }
        }

        cout << num_of_idx << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}