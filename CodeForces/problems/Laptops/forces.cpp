#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++) {
        if (v[i].second > v[i + 1].second) {
            cout << "Happy Alex" << '\n';
            return;
        }
    }

    cout << "Poor Alex" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}