#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (n == 1) {
            cout << "YES\n";
            continue;
        }

        sort(a.begin(), a.end());
        
        bool possible = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] > 1) {
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}