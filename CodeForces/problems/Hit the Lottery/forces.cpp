#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n; cin >> n;
    cout << n / 100 + n % 100 / 20 + n % 20 / 10 + n % 10 / 5 + n % 5 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}