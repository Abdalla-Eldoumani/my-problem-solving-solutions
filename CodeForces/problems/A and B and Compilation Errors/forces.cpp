#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    long long s1 = 0, s2 = 0, s3 = 0, x;

    for (int i = 0; i < n; ++i) { cin >> x; s1 += x; }
    for (int i = 0; i < n - 1; ++i) { cin >> x; s2 += x; }
    for (int i = 0; i < n - 2; ++i) { cin >> x; s3 += x; }

    cout << (s1 - s2) << '\n' << (s2 - s3) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}