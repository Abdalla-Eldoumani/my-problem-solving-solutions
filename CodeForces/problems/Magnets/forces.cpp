#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    string prev, curr;
    cin >> prev;
    int groups = 1;

    for (int i = 1; i < n; ++i) {
        cin >> curr;
        if (curr != prev) ++groups;
        prev = curr;
    }

    cout << groups << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}