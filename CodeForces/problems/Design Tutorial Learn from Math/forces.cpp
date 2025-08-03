#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> composite(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        for (int j = i * 2; j <= n; j += i) {
            composite[j] = 1;
        }
    }
    
    composite[0] = composite[1] = 0;
    for (int i = 4; i <= n; i++) {
        if (composite[i] && composite[n - i]) {
            cout << i << ' ' << n - i << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}