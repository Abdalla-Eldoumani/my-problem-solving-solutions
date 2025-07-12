#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int k; cin >> k;
        int count = 0, num = 0;
        while (count < k) {
            num++;
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }
        }
        cout << num << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}