#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int left = 0, right = n - 1;

        while (left <= right) {
            if (left == right) {
                cout << b[left];
                break;
            }
            
            cout << b[left] << ' ';
            cout << b[right] << ' ';
            left++, right--;
        }

        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}