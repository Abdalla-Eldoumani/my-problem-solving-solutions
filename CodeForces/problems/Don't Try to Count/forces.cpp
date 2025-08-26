#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string x, s; cin >> x >> s;

        int min_operations = 0;
        while (x.find(s) == string::npos) {
            if (x.size() > 10) {
                min_operations = -1;
                break;
            }
            x += x;
            min_operations++;
        }

        cout << min_operations << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}