#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        string b; cin >> b;
        string a = "";
        a += b[0];

        for (size_t i = 1; i < b.length(); i += 2) {
            a += b[i];
        }
        
        cout << a << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}