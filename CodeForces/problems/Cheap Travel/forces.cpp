#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    cout << (m * a <= b ? a * n : (n / m) * b + (n % m * a <= b ? n % m * a : b)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}