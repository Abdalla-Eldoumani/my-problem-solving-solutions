#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    cout << (n >= 0 ? n : max(n / 10, (n / 100) * 10 - abs(n % 10))) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}