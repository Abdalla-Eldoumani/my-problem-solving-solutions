#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    long long n; int k; cin >> n >> k;
    while (k--) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}