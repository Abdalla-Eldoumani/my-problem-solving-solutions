#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;
    int steps = 0;

    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m += 1;
        ++steps;
    }
    
    cout << steps + n - m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}