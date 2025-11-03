#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, m; cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int max_rounds = -1, result_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int rounds = (a[i] + m - 1) / m;
        if (rounds >= max_rounds) {
            max_rounds = rounds;
            result_index = i + 1;
        }
    }

    cout << result_index << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}