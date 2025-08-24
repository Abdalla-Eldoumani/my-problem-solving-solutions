#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> perm(n);
        for (int i = 0; i < n; ++i) {
            perm[i] = (i + 1) % n + 1;
        }

        for (int i = 0; i < n; ++i) {
            cout << perm[i] << ' ';
        }
        
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}