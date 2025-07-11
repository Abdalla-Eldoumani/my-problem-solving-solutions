#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, percentage; cin >> n;
    double total_percentage = 0.0;

    for (int i = 0; i < n; i++) {
        cin >> percentage;
        total_percentage += percentage;
    }
    
    cout << fixed << setprecision(6) << total_percentage / n << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}