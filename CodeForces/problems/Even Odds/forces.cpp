#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n, k; cin >> n >> k;
    cout << (k <= (n + 1) / 2 ? 2 * k - 1 : 2 * (k - (n + 1) / 2)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}