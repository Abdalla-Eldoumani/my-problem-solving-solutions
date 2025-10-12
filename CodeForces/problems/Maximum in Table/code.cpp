#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<vector<int>> table(n, vector<int>(n));
    int max_val = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                table[i][j] = 1;
            } else {
                table[i][j] = table[i - 1][j] + table[i][j - 1];
            }

            max_val = max(max_val, table[i][j]);
        }
    }

    cout << max_val << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}