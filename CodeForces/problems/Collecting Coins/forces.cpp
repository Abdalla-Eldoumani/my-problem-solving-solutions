#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--){
        int a, b, c, n; cin >> a >> b >> c >> n;
        
        int max_coins = max(a, max(b, c));
        int diff = max_coins - a + max_coins - b + max_coins - c;

        if (diff > n){
            cout << "NO\n";
        } else {
            n -= diff;
            if (n % 3 == 0){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}