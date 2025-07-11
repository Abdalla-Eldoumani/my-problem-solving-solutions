#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n, m, a; cin >> n >> m >> a;

    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;
    long long total_flagstones = flagstones_n * flagstones_m;
    cout << total_flagstones << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}