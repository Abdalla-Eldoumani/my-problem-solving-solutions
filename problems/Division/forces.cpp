#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int rating; cin >> rating;
        cout << (rating >= 1900 ? "Division 1\n" : rating >= 1600 ? "Division 2\n" : rating >= 1400 ? "Division 3\n" : "Division 4\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}