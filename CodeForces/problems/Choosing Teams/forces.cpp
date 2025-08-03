#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, k; cin >> n >> k;
    vector<int> y(n);
    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    sort(y.begin(), y.end());
    
    int teams = 0;
    for (int i = 0; i < n; i += 3) {
        if (i + 2 < n && y[i] + k <= 5 && y[i + 1] + k <= 5 && y[i + 2] + k <= 5) {
            teams++;
        }
    }
    
    cout << teams << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}