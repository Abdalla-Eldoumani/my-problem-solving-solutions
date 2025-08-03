#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    string s; cin >> s;
    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
            count1 = 0;
        } else {
            count1++;
            count0 = 0;
        }
        if (count0 >= 7 || count1 >= 7) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}