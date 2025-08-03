#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, k; cin >> n >> k;
    int time_left = 4 * 60 - k, count = 0;

    for (int i = 1; i <= n; ++i) {
        if (5 * i <= time_left) {
            ++count;
            time_left -= 5 * i;
        } else break;
    }

    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}