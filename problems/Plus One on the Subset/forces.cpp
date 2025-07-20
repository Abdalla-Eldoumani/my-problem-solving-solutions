#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int min_x = INT_MAX, max_x = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            min_x = min(min_x, x);
            max_x = max(max_x, x);
        }
        
        cout << max_x - min_x<< '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}