#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int min_ops = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        min_ops = min(min_ops, abs(a[i]));
    }

    cout << min_ops << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}