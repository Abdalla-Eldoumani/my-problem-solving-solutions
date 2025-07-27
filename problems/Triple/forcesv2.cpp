#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        if (n < 3) {
            cout << -1 << '\n';
            continue;
        }
 
        vector<int> freq(n + 1, 0);
        int answer = -1;
 
        for (int &x : a) {
            if (answer != -1) break;
            if (++freq[x] == 3) {
                answer = x;
                break;
            }
        }
 
        cout << answer << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}