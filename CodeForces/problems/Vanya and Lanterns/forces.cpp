#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, l; cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());

    double d = 0;
    for (int i = 1; i < n; ++i) d = max(d, (a[i] - a[i - 1]) / 2.0);
    
    d = max(d, (double) a[0]);
    d = max(d, (double) (l - a[n - 1]));
    cout << fixed << setprecision(9) << d << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}