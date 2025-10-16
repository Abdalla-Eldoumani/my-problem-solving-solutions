#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int left = 0, right = n - 1, ans = 0;
        while (left <= right) {
            while (left <= right && s[left] == 'W') left++;
            while (left <= right && s[right] == 'W') right--;
            if (left > right) break;
            ans++;
            left += k;
        }

        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}