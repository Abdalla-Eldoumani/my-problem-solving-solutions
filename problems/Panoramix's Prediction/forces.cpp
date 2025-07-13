#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;

    auto is_prime = [](int x) {
        if (x < 2) return false;
        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) return false;
        }
        return true;
    };

    int next = n + 1;
    while (!is_prime(next)) ++next;

    cout << (next == m ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}