#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_map<int, int> mp;
        int num = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
            if (mp[x] >= 3) {
                flag = false;
                num = x;
            }
        }

        cout << (!flag ? num : -1) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}