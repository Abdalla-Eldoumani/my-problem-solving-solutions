#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> solutions;

    for (int a = 0; a <= 1000; ++a) {
        int b1 = n - a * a;
        int b2 = m - a;

        if (b1 >= 0 && b1 * b1 + a == m) {
            solutions.emplace_back(a, b1);
        }
        if (b2 >= 0 && a * a + b2 == n && b2 != b1) {
            solutions.emplace_back(a, b2);
        }
    }

    cout << solutions.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}