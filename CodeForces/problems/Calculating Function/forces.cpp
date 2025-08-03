#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n; cin >> n;
    cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}