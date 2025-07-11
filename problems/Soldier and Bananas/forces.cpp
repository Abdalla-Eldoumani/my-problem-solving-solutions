#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int k, n, w; cin >> k >> n >> w;
    long long sum = 0;
    for (int i = 1; i <= w; ++i) sum += i * k;
    cout << (sum <= n ? 0 : sum - n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}