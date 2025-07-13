#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];
        cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}