#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x == 1) {
            cout << "HARD\n";
            return;
        }
    }
    cout << "EASY\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}