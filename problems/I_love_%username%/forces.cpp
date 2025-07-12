#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n; cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; ++i) cin >> points[i];

    int amazing_count = 0, best = points[0], worst = points[0];
    for (int i = 1; i < n; ++i) {
        if (points[i] > best) {
            ++amazing_count;
            best = points[i];
        }
    
        if (points[i] < worst) {
            ++amazing_count;
            worst = points[i];
        }
    }
    
    cout << amazing_count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}