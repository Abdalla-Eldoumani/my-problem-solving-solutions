#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) cout << "I hate";
        else cout << "I love";
        if (i == n) cout << " it";
        else cout << " that ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}