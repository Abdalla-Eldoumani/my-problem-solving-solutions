#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_product = 0;
        for (int i = 0; i < n; ++i) {
            vector<int> b = a;
            b[i] += 1;

            int product = 1;
            for (int j = 0; j < n; ++j) {
                product *= b[j];
            }
            
            max_product = max(max_product, product);
        }

        cout << max_product << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}