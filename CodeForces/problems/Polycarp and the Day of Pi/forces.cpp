#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        int cnt = 0;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == pi[i]) cnt++;
            else break;
        }
        cout << cnt << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}